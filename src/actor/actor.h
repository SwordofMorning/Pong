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

#include "../display/display.h"

class actor {
protected:
    /* actor's now postion */
    int *m_posX, *m_posY;

    /* actor's old postion */
    int *m_lastX, *m_lastY;
    
    /* display interface */
    display m_disp;

    void clearLastImage();

    void drawNewImage();

public:
    /* constructor */
    actor(int* posX, int* posY, int* lastX, int* lastY);
};