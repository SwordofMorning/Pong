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

#include <vector>
#include <utility>
#include "../config.h"
#include "../display/display.h"
#include "actor.h"

class ball : public actor {
private:

/* ===== variable ===== */
    /**
     * @brief radius of ping-pong ball.
     * @param posXY is the center of the ball.
     */
    const int m_radius;

    /**
     * @brief move speed for x and y coordinate
     * @note which have direction, 
     * for speedX: +, right; - left.
     * for speedY: +, down; - up.
     */
    double m_speedX, m_speedY;

/* ===== function ===== */
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

    /**
     * @brief Bresenham's circle algorithm
     * 
     */
    std::vector<std::pair<int, int>> BresenhamCircle(int x, int y, int r);

public:
    /**
     * @brief Construct a new ball object
     * 
     * @param radius radius of ball
     * @param posX actor's new postion: x-coordinate
     * @param posY actor's new postion: y-coordinate
     */
    ball(const int& radius, int posX, int posY, 
        const int& speedX = 1, const int& speedY = 0);

    /**
     * @brief move function
     */
    virtual void move();
};