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

    /* move speed for x and y coordinate */
    int m_speedX, m_speedY;

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

    /**
     * @brief Check whether the remaining amount 
     * with the boundary supports the next move. 
     * 
     * @note If the remaining space has room to move, then move. 
     * If there is no margin, move to the boundary and do reflection calculations at the same time.
     * @ref toBoundary()
     * 
     * 如果不能移动一个完整的步长（|vector_velocity_x + vector_velocity_y| = BALL_MOVE_SPEED），则移动到边界，并计算反射。
     * 
     * @param dirX 0, left; 1 right
     * @param dirY 0, up; 1 down
     */
    bool boundary(bool dirX, bool dirY);

    /**
     * @brief 不满足一个完整步长的单次移动
     * 
     */
    void toBoundary();

public:
    /**
     * @brief Construct a new ball object
     * 
     * @param radius radius of ball
     * @param posX actor's new postion: x-coordinate
     * @param posY actor's new postion: y-coordinate
     */
    ball(const int& radius, int posX, int posY);

    virtual void move();
};