#include <iostream>
#include "display/display.h"

int main()
{
    displayWin dp{100, 100};

    dp(0, 0);

    Sleep(5);

    dp(500, 500);
    
    return 0;
}