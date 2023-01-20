#include "display.h"

display::display(const int& width, const int& height) :
                m_dispW(width, height)
{
    // nothing
}

void display::operator()(int x, int y)
{
#if DISPLAY_API_WIN

    m_dispW(x, y);

#elif DISPLAY_API_LIN

    // nothing todo now

#endif
}