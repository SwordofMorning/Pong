#pragma once

/**
 * @file paddle.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-01-21
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include "actor.h"

class paddle : public actor {
private:
    /* paddle width and height */
    const int m_width, m_height;

public:
    paddle(const int& width, const int& height, 
            int* xPtr, int* yPtr);

    void draw(int posX, int posY);
};