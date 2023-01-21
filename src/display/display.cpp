#include "display.h"

display::display()
{
    // nothing
}

void display::operator()(int* arrayX, int* arrayY, int length, 
                        uint8_t r, uint8_t g, uint8_t b)
{
#if DISPLAY_API_WIN

    m_dispW(arrayX, arrayY, length, r, g, b);

#elif DISPLAY_API_LIN

    // nothing todo now

#endif
}