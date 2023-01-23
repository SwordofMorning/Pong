#include <iostream>
#include "display/display.h"
#include "actor/paddle.h"

int main()
{
    paddle pd(100, 100, 0, 0, 0, 0);

    pd.test();
    
    Sleep(5);

    return 0;
}