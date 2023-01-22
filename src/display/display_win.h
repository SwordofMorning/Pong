#pragma once

/**
 * @file display_win.h
 * @author @SwordofMorning / xjt.include@gmail.com
 * @brief Windows console pixel display interface
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
public:
    /* Constructor */
    displayWin();

    /**
     * @brief Windows console pixel display interface
     * which is a pixel control function via SetPixel()
     * 
     * @param arrayX pixel x-coordinate array
     * @param arrayY pixel y-coordinate array
     * @param length array length
     * @param r red channel
     * @param g green channel
     * @param b blue channel
     */
    void operator()(int* arrayX, int* arrayY, int length, 
                    uint8_t r, uint8_t g, uint8_t b);
};