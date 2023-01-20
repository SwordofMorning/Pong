#pragma once

/**
 * @file display.h
 * @author @SwordofMorning / xjt.include@gmail.com
 * @brief console display api bridge for display_win and display_lin.
 * @version 0.1
 * @date 2023-01-20
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include "../config.h"
#include "display_win.h"

class display {
private:
    displayWin m_dispW;
public:
    display(const int& width, const int& height);

    void operator()(int x, int y);
};