#include "display_win.h"

displayWin::displayWin(const int& width, const int& height) :
                    m_width(width), m_height(height)
{
    m_lastPosX = 0;
    m_lastPosY = 0;
}

void displayWin::setPixel(uint8_t r, uint8_t g, uint8_t b)
{
    HWND myConsole = GetConsoleWindow();
    HDC myDC = GetDC(myConsole);
    COLORREF color = RGB(r, g, b);

    for (int i = 0; i < m_width; ++i)
    {
        for (int j = 0; j < m_height; ++j)
        {
            SetPixel(myDC,              // handle
                    m_lastPosX + i,     // X pos
                    m_lastPosY + j,     // Y pos
                    color);             // color
        }
    }

    ReleaseDC(myConsole, myDC);
}

void displayWin::operator()(int x, int y)
{
    /* setp 1 : clear last image */
    setPixel(0, 0, 0);

    /* setp 2 : draw new image */
    m_lastPosX = x;
    m_lastPosY = y;
    setPixel(255, 255, 255);
}