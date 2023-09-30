//
// Created by meanx on 01.10.2023.
//

#include "Player.h"

Player::Player() : m_x(14.7f), m_y(5.09f), m_a(0.f), m_speed(0.75f) {

}

Player::Player(float startX, float startY, float startA, float speed) : m_x(startX), m_y(startY), m_a(startA),
                                                                        m_speed(speed) {

}
