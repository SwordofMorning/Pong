#include "actor.h"

actor::actor(int* posX, int* posY, int* lastX, int* lastY)
{
    m_posX = posX;
    m_posY = posY;
    m_lastX = lastX;
    m_lastY = lastY;
}