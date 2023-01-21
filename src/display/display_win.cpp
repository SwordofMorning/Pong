#include "display_win.h"

displayWin::displayWin(const int& width, const int& height)
{
    // do nothing
}

void displayWin::setPixel(int* arrayX, int* arrayY, int length, 
                        uint8_t r, uint8_t g, uint8_t b)
{
    HWND myConsole = GetConsoleWindow();
    HDC myDC = GetDC(myConsole);
    COLORREF color = RGB(r, g, b);

    for (int i = 0; i < length; ++i)
    {
        SetPixel(myDC,              // handle
            *arrayX++,              // X pos
            *arrayY++,              // Y pos
            color);
    }

    ReleaseDC(myConsole, myDC);
}

void displayWin::operator()(int* arrayX, int* arrayY, int length, 
                            uint8_t r, uint8_t g, uint8_t b)
{
    setPixel(arrayX, arrayY, length, 0, 0, 0);
}