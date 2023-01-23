#include "paddle.h"

paddle::paddle(const int& width, const int& height, 
        int* posX, int* posY, int* lastX, int* lastY) :
        actor(posX, posY, lastX, lastY), 
        m_width(width), m_height(height)
{
    // nothing
}

void paddle::imageInterface(int x, int y, uint8_t r, uint8_t g, uint8_t b)
{
    int* arrayX = new int[m_width * m_height];
    int* arrayY = new int[m_width * m_height];

    for (int i = 0; i < m_width; ++i)
    {
        for (int j = 0; j < m_height; ++j)
        {
            arrayX[i * m_height + j] = x + i;
            arrayY[i * m_height + j] = y + j;
        }
    }

    display()(arrayX, arrayY, m_width * m_height, r, g, b);

    delete[] arrayX;
    delete[] arrayY;
}

void paddle::clearLastImage()
{
    imageInterface(*m_lastX, *m_lastY, 0, 0, 0);
}

void paddle::drawNewImage()
{
    imageInterface(*m_posX, *m_posY, 255, 255, 255);
}

void paddle::test()
{
    imageInterface(0, 0, 255, 255, 255);
}