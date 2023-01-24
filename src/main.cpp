#include <iostream>
#include "config.h"
#include "display/display.h"
#include "actor/paddle.h"
#include "actor/ball.h"

int main()
{
    int tmp = 200;
    // paddle pd{PADDLE_WIDTH, PADDLE_HEIGHT, &tmp, &tmp, &tmp, &tmp};

    // pd.updateImage();

    ball b{ 100, &tmp, &tmp, &tmp, &tmp };

    b.updateImage();

    return 0;
}