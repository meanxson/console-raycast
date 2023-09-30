//
// Created by meanx on 01.10.2023.
//

#ifndef CONSOLE_RAYCAST_PLAYER_H
#define CONSOLE_RAYCAST_PLAYER_H

#include "Windows.h"


class Player {
public:
    Player();

    Player(float startX, float startY, float startA, float speed);

    ~Player() = default;


private:
    float m_x;
    float m_y;
    float m_a;
    float m_speed;
};


#endif //CONSOLE_RAYCAST_PLAYER_H
