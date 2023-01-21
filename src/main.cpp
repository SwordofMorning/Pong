#include <iostream>
#include "display/display.h"

int main()
{
    display dp;

    int x[100];
    int y[100];

    for (int i = 0; i < 100; ++i)
    {
        x[i] = i;
        y[i] = i;
    }

    dp(x, y, 100, 255, 255, 255);

    Sleep(5);
    
    return 0;
}