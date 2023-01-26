#include "paddle.h"

paddle::paddle(const int& width, const int& height, int posX, int posY) :
        actor(posX, posY), 
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
    imageInterface(m_posX, m_posY, 0, 0, 0);
}

void paddle::drawNewImage()
{
    imageInterface(m_posX, m_posY, 255, 255, 255);
}

bool paddle::boundary(bool direction)
{
    if (direction)  // move down
        if (m_posY + PADDLE_HEIGHT + PADDLE_MOVE_SPEED > PANEL_HEIGHT) return false;
    else            // move up
        if (m_posY - PADDLE_MOVE_SPEED < 0) return false;

    return true;
}

void paddle::move(bool direction)
{
    /* step 1 : check boundary */
    if (!boundary(direction)) return;

    /* step 2 : clear last image */
    clearLastImage();

    /* step 3 : draw new image */
    m_posY += direction ? PADDLE_MOVE_SPEED : -PADDLE_MOVE_SPEED;
    drawNewImage();
}