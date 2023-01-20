#include "display_win.h"

displayWin::displayWin(const int& width, const int& height) :
                    m_width(width), m_height(height)
{
    m_lastPosX = 0;
    m_lastPosY = 0;
}

void displayWin::gotoXY(int x, int y)
{
    COORD pos;
	HANDLE hOutput;
	pos.X = x;
	pos.Y = y;
	hOutput = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(hOutput, pos);
}

void displayWin::clear()
{
    for (int i = 0; i < m_width; i += DISP_SPACING)
    {
        for (int j = 0; i < m_height; ++j)
        {
            this->gotoXY(i, j);
            std::cout << " ";
        }
    }
}

void displayWin::draw()
{
    for (int i = 0; i < m_width; i += DISP_SPACING)
    {
        for (int j = 0; i < m_height; ++j)
        {
            this->gotoXY(i, j);
            std::cout << DISP_ELEMENT;
        }
    }
}