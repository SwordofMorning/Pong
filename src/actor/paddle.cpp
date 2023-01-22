#include "paddle.h"

paddle::paddle(const int& width, const int& height, 
        int* posX, int* posY, int* lastX, int* lastY) :
        actor(posX, posY, lastX, lastY), 
        m_width(width), m_height(height)
{
    // nothing
}

void paddle::clearLastImage()
{
    int* arrayX = new int[m_width * m_height];
    int* arrayY = new int[m_width * m_height];

    for (int i = 0; i < m_width; ++i)
    {
        for (int j = 0; j < m_height; ++j)
        {
            *arrayX++ = *m_lastX + i;
            *arrayY++ = *m_lastY + j;
        }
    }

    display()(arrayX, arrayY, m_width * m_height, 0, 0, 0);

    delete[] arrayX;
    delete[] arrayY;
}

void paddle::drawNewImage()
{

}