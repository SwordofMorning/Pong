#include "input.h"

input::input()
{
    // do nothing
}

char input::operator()()
{
    if (_kbhit()) return _getch();

    return 0x00;
}