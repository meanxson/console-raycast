//
// Created by meanx on 01.10.2023.
//

#include "Player.h"

Player::Player() : m_x(14.7f), m_y(5.09f), m_a(0.f), m_speed(0.75f) {

}

Player::Player(float startX, float startY, float startA, float speed) : m_x(startX), m_y(startY), m_a(startA),
                                                                        m_speed(speed) {

}

float Player::getX() {
    return m_x;
}

float Player::getY() {
    return m_y;
}

float Player::getAngle() {
    return m_a;
}

float Player::getSpeed() {
    return m_speed;
}

void Player::setX(float x) {
    m_x = x;
}

void Player::setY(float y) {
    m_y = y;
}

void Player::setAngle(float a) {
    m_a = a;
}
