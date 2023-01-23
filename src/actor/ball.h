#pragma once

/**
 * @file ball.h
 * @author @SwordofMorning / xjt.include@gmail.com
 * @brief ping-pong ball
 * @version 0.1
 * @date 2023-01-23
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include "../config.h"
#include "actor.h"

class ball : public actor {
private:
    /**
     * @brief radius of ping-pong ball.
     * @param posXY is the center of the ball.
     */
    const int m_radius;

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
     * @brief Construct a new ball object
     * 
     * @param radius radius of ball
     * @param posX actor's new postion: x-coordinate
     * @param posY actor's new postion: y-coordinate
     * @param lastX actor's old postion: x-coordinate
     * @param lastY actor's old postion: y-coordinate
     */
    ball(const int& radius, 
            int* posX, int* posY, int* lastX, int* lastY);

    virtual void updateImage();
};