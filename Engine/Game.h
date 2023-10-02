//
// Created by meanx on 01.10.2023.
//

#ifndef CONSOLE_RAYCAST_GAME_H
#define CONSOLE_RAYCAST_GAME_H

#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <chrono>

#include "Windows.h"


class Game {

public:
    Game();

    Game(int width, int height, float fov, int depth);

    ~Game() = default;

    int getScreenWidth();
    int getScreenHeight();

private:
    int m_screenWidth;
    int m_screenHeight;

    float m_FOV;
    float m_Depth;
};


#endif //CONSOLE_RAYCAST_GAME_H
