#pragma once

/**
 * @file input.h
 * @author @SwordofMorning / xjt.include@gmail.com
 * @brief catch user's input event
 * @version 0.1
 * @date 2023-01-24
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <iostream>
#include <stdio.h>
#include <conio.h>

class input {
public:
    /* constructor */
    input();

    char operator()();
};