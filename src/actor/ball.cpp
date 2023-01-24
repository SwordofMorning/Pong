#include "ball.h"

ball::ball(const int& radius, 
    int* posX, int* posY, int* lastX, int* lastY) :
    actor(posX, posY, lastX, lastY), 
    m_radius(radius)
{
    // nothing
}

void ball::imageInterface(int x, int y, uint8_t r, uint8_t g, uint8_t b)
{
    std::vector<std::pair<int, int>> points = BresenhamCircle(x, y, m_radius);

    int* arrayX = new int[points.size()];
    int* arrayY = new int[points.size()];

    for (int i = 0; i < points.size(); ++i)
    {
        arrayX[i] = points[i].first;
        arrayY[i] = points[i].second;
    }

    display()(arrayX, arrayY, points.size(), r, g, b);

    delete[] arrayX;
    delete[] arrayY;
}

std::vector<std::pair<int, int>> ball::BresenhamCircle(int x, int y, int r)
{
    std::vector<std::pair<int, int>> retval;

    int p = 1 - r;
    int addX = 0;
    int addY = r;

    auto addPoint = [](std::vector<std::pair<int, int>>& retval, int x, int y, int addX, int addY)
    {
        retval.push_back(std::make_pair<int, int>(x + addX, y + addY));
        retval.push_back(std::make_pair<int, int>(x - addX, y + addY));
        retval.push_back(std::make_pair<int, int>(x + addX, y - addY));
        retval.push_back(std::make_pair<int, int>(x - addX, y - addY));

        retval.push_back(std::make_pair<int, int>(x + addY, y + addX));
        retval.push_back(std::make_pair<int, int>(x - addY, y + addX));
        retval.push_back(std::make_pair<int, int>(x + addY, y - addX));
        retval.push_back(std::make_pair<int, int>(x - addY, y - addX));
    };

    addPoint(retval, x, y, addX, addY);

    while (addX < addY)
    {
        addX++;

        p += (p < 0) ? (2 * addX + 1) : 2 * (addX - --addY) + 1;

        addPoint(retval, x, y, addX, addY);

        // fill circle
        for (int i = 0; i <= addX; ++i)
            for (int j = 0; j <= addY; ++j)
                addPoint(retval, x, y, i, j);
    }

    return retval;
}

void ball::clearLastImage()
{
    imageInterface(*m_lastX, *m_lastY, 0, 0, 0);
}

void ball::drawNewImage()
{
    imageInterface(*m_posX, *m_posY, 255, 255, 255);
}

void ball::updateImage()
{
    clearLastImage();
    drawNewImage();
}