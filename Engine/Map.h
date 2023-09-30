//
// Created by meanx on 01.10.2023.
//

#include "Windows.h"
#include <iostream>

#ifndef CONSOLE_RAYCAST_MAP_H
#define CONSOLE_RAYCAST_MAP_H


class Map {
public:
    Map();

    Map(int height, int width);

    ~Map() = default;

    void update();

    void initMap();

private:
    int m_mapHeight;
    int m_mapWidth;


    std::wstring m_map;
};


#endif //CONSOLE_RAYCAST_MAP_H
