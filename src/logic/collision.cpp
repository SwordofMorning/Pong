#include "collision.h"

/**
 * @note Use rectangles instead of circles to calculate collisions 
 * to reduce the amount of calculation.
 * 
 * @def rectangle's vertex
 * A---B
 * |   |
 * C---D
 */

bool collision::ball_left_paddle(ball p_ball, paddle p_paddle)
{
    // center of circle
    std::pair<int, int> ballCenter = p_ball.getPos();
    // point A of rectangle
    std::pair<int, int> paddleA = p_paddle.getPos();

    // point B of rectangle
    std::pair<int, int> paddleB = std::make_pair(paddleA.first + PADDLE_WIDTH, paddleA.second);
    // point D of rectangle
    std::pair<int, int> paddleD = std::make_pair(paddleB.first, paddleB.second + PADDLE_HEIGHT);

    // point A of circle
    std::pair<int, int> ballA = std::make_pair(ballCenter.first - BALL_RADIUS, ballCenter.second - BALL_RADIUS);
    // point C of circle
    std::pair<int, int> ballC = std::make_pair(ballCenter.first - BALL_RADIUS, ballCenter.second + BALL_RADIUS);

    // x
    if (ballA.first > paddleB.first) return false;

    // y
    if (ballA.second >= paddleD.second && ballC.second <= paddleB.second) return true;

    return false;
}

bool collision::ball_right_paddle(ball p_ball, paddle p_paddle)
{
    // center of circle
    std::pair<int, int> ballCenter = p_ball.getPos();
    // point A of rectangle
    std::pair<int, int> paddleA = p_paddle.getPos();

    // point C of rectangle
    std::pair<int, int> paddleC = std::make_pair(paddleA.first, paddleA.second + PADDLE_HEIGHT);

    
}