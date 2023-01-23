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

class actor {
protected:
    /* actor's now postion */
    int *m_posX, *m_posY;

    /* actor's old postion */
    int *m_lastX, *m_lastY;

    virtual void imageInterface(int x, int y, uint8_t r, uint8_t g, uint8_t b) = 0;

    virtual void clearLastImage() = 0;

    virtual void drawNewImage() = 0;

public:
    /* constructor */
    actor(int* posX, int* posY, int* lastX, int* lastY);
};