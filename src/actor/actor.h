#pragma once

/**
 * @file actor.h
 * @author @SwordofMorning / xjt.include@gmail.com
 * @brief abstract actor
 * @version 0.1
 * @date 2023-01-21
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdint.h>
#include <utility>

class actor {
protected:
    /* actor's now postion */
    int m_posX, m_posY;

    /**
     * @brief draw image via class_display
     * 
     * @param x actor's x-coordinate
     * @param y actor's y-coordinate
     * @param r red channel
     * @param g green channel
     * @param b blue channel
     */
    virtual void imageInterface(int x, int y, uint8_t r, uint8_t g, uint8_t b) = 0;

    /**
     * @brief clear image i.e. set black for last image
     */
    virtual void clearLastImage() = 0;

    /**
     * @brief set new image i.e. draw write image
     */
    virtual void drawNewImage() = 0;

public:
    /**
     * @brief Construct a new actor object
     * 
     * @param posX actor's new postion: x-coordinate
     * @param posY actor's new postion: y-coordinate
     */
    actor(int posX, int posY);

    std::pair<int, int> getPos();
};