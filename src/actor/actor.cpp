#include "actor.h"

actor::actor(int posX, int posY)
{
    m_posX = posX;
    m_posY = posY;
}

std::pair<int, int> actor::getPos()
{
    return std::make_pair(m_posX, m_posY);
}