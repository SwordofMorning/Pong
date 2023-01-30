#pragma once

/**
 * @file collision.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-01-30
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include "../config.h"
#include "../actor/actor.h"
#include "../actor/paddle.h"
#include "../actor/ball.h"

class collision {
private:

public:
    bool ball_left_paddle(ball p_ball, paddle p_paddle);

    bool ball_right_paddle(ball p_ball, paddle p_paddle);
};