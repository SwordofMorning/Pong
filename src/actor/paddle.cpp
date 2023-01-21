#include "paddle.h"

paddle::paddle(const int& width, const int& height, int* xPtr, int* yPtr) :
        actor(xPtr, yPtr), m_width(width), m_height(height)
{
    // nothing
}

void paddle::draw(int posX, int posY)
{
    /* step 1 : clear last image */

    
}