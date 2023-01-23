#include <iostream>
#include "config.h"
#include "display/display.h"
#include "actor/paddle.h"

int main()
{
    int tmp = 0;
    paddle pd{PADDLE_WIDTH, PADDLE_HEIGHT, &tmp, &tmp, &tmp, &tmp};

    pd.updateImage();

    return 0;
}