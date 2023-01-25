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

    /**
     * @brief draw image via class_display
     * 
     * @param x actor's x-coordinate
     * @param y actor's y-coordinate
     * @param r red channel
     * @param g green channel
     * @param b blue channel
     */
    virtual void imageInterface(int x, int y, uint8_t r, uint8_t g, uint8_t b);

    /**
     * @brief clear image i.e. set black for last image
     */
    virtual void clearLastImage();

    /**
     * @brief set new image i.e. draw write image
     */
    virtual void drawNewImage();

public:
    /**
     * @brief Construct a new paddle object
     * 
     * @param width paddle's width
     * @param height paddle's height
     * @param posX actor's new postion: x-coordinate
     * @param posY actor's new postion: y-coordinate
     */
    paddle(const int& width, const int& height, int posX, int posY);

    virtual void updateImage();

    virtual void move();
};