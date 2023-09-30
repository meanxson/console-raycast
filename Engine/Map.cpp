//
// Created by meanx on 01.10.2023.
//

#include "Map.h"

Map::Map() : m_mapHeight(16), m_mapWidth(16) {

}

Map::Map(int height, int width) : m_mapHeight(height), m_mapWidth(width) {

}

void Map::update() {

}

void Map::initMap() {
    m_map += L"################";
    m_map += L"#..............#";
    m_map += L"#..............#";
    m_map += L"#..............#";
    m_map += L"#..............#";
    m_map += L"#..............#";
    m_map += L"#..............#";
    m_map += L"#..............#";
    m_map += L"#..............#";
    m_map += L"#..............#";
    m_map += L"################";
}
