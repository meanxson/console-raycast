#include <iostream>
#include <windows.h>
#include "Engine/Game.h"
#include "Engine/Map.h"
#include "Engine/Player.h"

Game game = Game();
Map map = Map();
Player player = Player();

bool isGamePlay = true;

int main() {
    wchar_t *screen = new wchar_t[game.getScreenWidth() * game.getScreenHeight()];
    HANDLE hConsole = CreateConsoleScreenBuffer(GENERIC_READ | GENERIC_WRITE, 0, NULL, CONSOLE_TEXTMODE_BUFFER, NULL);
    SetConsoleActiveScreenBuffer(hConsole);
    DWORD dwBytesWritten = 0;

    map.initMap();

    auto tp1 = std::chrono::system_clock::now();
    auto tp2 = std::chrono::system_clock::now();

    while (isGamePlay) {

        //Frame calculation per time for move
        tp2 = std::chrono::system_clock::now();
        std::chrono::duration<float> elapsedTime = tp2 - tp1;
        tp1 = tp2;
        float fElapsedTime = elapsedTime.count();

        if (GetAsyncKeyState((unsigned char) 'A') & 0x8000) {
        }


        if (GetAsyncKeyState((unsigned char) 'D') & 0x8000) {

        }


        if (GetAsyncKeyState((unsigned char) 'W') & 0x8000) {

        }


        if (GetAsyncKeyState((unsigned char) 'S') & 0x8000) {

        }

        for (int x = 0; x < game.getScreenWidth(); ++x) {
            float fRayAngle = (0.0f);
        }
    }
}
