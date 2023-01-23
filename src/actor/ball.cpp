#include "ball.h"

ball::ball(const int& radius, 
    int* posX, int* posY, int* lastX, int* lastY) :
    actor(posX, posY, lastX, lastY), 
    m_radius(radius)
{
    // nothing
}

void ball::imageInterface(int x, int y, uint8_t r, uint8_t g, uint8_t b)
{
    /**
     * @todo 中心画圆法
     * 
     */
}