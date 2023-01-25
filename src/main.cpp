#include <iostream>
#include "config.h"
#include "display/display.h"
#include "actor/paddle.h"
#include "actor/ball.h"
#include "interaction/input.h"

int main()
{
    input it;

    while (true)
    {
        char ch = it();
        if (ch != 0x00) std:: cout << ch << std::endl;
    }

    return 0;
}