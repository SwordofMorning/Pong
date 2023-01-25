#pragma once

/**
 * @file interaction.h
 * @author @SwordofMorning / xjt.include@gmail.com
 * @brief as game controller
 * @version 0.1
 * @date 2023-01-25
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include "../config.h"
#include "input.h"
#include "actor/actor.h"
#include "actor/ball.h"
#include "actor/paddle.h"

class interaction {
private:
    /* left paddle and right paddle */
    paddle m_pdl, m_pdr;

    /* ball */
    ball m_ball;

public:
    /* constructor */
    interaction();
};