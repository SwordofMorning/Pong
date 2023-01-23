/**
 * @file config.h
 * @author @SwordofMorning / xjt.include@gmail.com
 * @brief game config
 * @version 0.1
 * @date 2023-01-20
 * 
 * @copyright Copyright (c) 2023
 * 
 */

/* Set 1 to enable windows console display api, set 0 to disable */
#define DISPLAY_API_WIN 1

/* Set 1 to enable linux console display api, set 0 to disable */
#define DISPLAY_API_LIN 0

/**
 * @attention DISPLAY_API_WIN | DISPLAY_API_LIN,
 * can only enable one of them.
 */

/* Game(console) screen width */
#define PANEL_WIDTH 400

/* Game(console) screen height */
#define PANEL_HEIGHT 400

/* Ping-Pong paddle width */
#define PADDLE_WIDTH 20

/* Ping-Pong paddle Height */
#define PADDLE_HEIGHT 100

/* Ping-Pong ball radius */
#define BALL_RADIUS 3