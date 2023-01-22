#pragma once

/**
 * @file paddle.h
 * @author @SwordofMorning / xjt.include@gmail.com
 * @brief ping-pong paddle
 * @version 0.1
 * @date 2023-01-21
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include "actor.h"
#include "../display/display.h"

class paddle : public actor {
private:
    /**
     * @brief paddle width and height which is a rectangle.
     * @param posXY is the upper left corner of rectangle.
     */
    const int m_width, m_height;

    virtual void clearLastImage();

    virtual void drawNewImage();

public:
    /* constructor */
    paddle(const int& width, const int& height, 
            int* posX, int* posY, int* lastX, int* lastY);

    void draw(int posX, int posY);
};