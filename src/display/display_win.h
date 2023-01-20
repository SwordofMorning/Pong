#pragma once

/**
 * @file display_win.h
 * @author @SwordofMorning / xjt.include@gmail.com
 * @brief 
 * @version 0.1
 * @date 2023-01-20
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <Windows.h>
#include <iostream>
#include "display_config.h"

class displayWin {
protected:
    /* image width and height */
    const int m_width, m_height;

    /* The origin when the image was last drawn */
    int m_lastPosX, m_lastPosY;

    void gotoXY(int x, int y);

    /* Clear the old image */
    void clear();

    /* Draw a new image */
    void draw();

public:
    /* Constructor */
    displayWin(const int& width, const int& height);

    int operator()(int x, int y);
};