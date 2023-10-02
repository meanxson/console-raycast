//
// Created by meanx on 01.10.2023.
//

#include "Game.h"

Game::Game() : m_screenHeight(40), m_screenWidth(120), m_Depth(16.0f), m_FOV(3.14159f / 4.0f) {

}

Game::Game(int width, int height, float fov, int depth) : m_screenWidth(width), m_screenHeight(height), m_FOV(fov),
                                                          m_Depth(depth) {

}

int Game::getScreenWidth() {
    return m_screenWidth;
}

int Game::getScreenHeight() {
    return m_screenHeight;
}
