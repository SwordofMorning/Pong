#pragma once

/**
 * @file display_win.h
 * @author @SwordofMorning / xjt.include@gmail.com
 * @brief console display interface of Windows
 * @version 0.1
 * @date 2023-01-20
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <Windows.h>
#include <iostream>
#include <stdint.h>

class displayWin {
protected:
    /* image width and height */
    const int m_width, m_height;

    /* The origin when the image was last drawn */
    int m_lastPosX, m_lastPosY;

    /* Draw pixel on console */
    void setPixel(uint8_t r, uint8_t g, uint8_t b);

public:
    /* Constructor */
    displayWin(const int& width, const int& height);

    /**
     * @brief change image's position, 
     * first clear last image via setPixel(0, 0, 0), 
     * next draw new image by setPixel(255, 255, 255).
     * 
     * @param x new x coordinate
     * @param y new y coordinate
     * @return 0, success; others fail.
     */
    void operator()(int x, int y);
};