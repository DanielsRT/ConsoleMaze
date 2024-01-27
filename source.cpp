#include <iostream>
using namespace std;

#include <Windows.h>

int nScreenWidth = 120;
int nScreenHeight = 40;

float fPlayerX = 0.0f;
float fPlayerY = 0.0f;
float fPlayerA = 0.0f;

int nMapHegith = 16;
int nMapWidth = 16;

int main()
{
    // Create Screen buffer
    wchar_t *screen = new wchar_t[nScreenHeight * nScreenHeight];
    HANDLE hConsole = CreateConsoleScreenBuffer(GENERIC_READ | GENERIC_WRITE, 0, NULL, CONSOLE_TEXTMODE_BUFFER, NULL);
    SetConsoleActiveScreenBuffer(hConsole);
    DWORD dwBytesWritten = 0;

    wstring map;

    map += L"################";
    map += L"#..............#";
    map += L"#..............#";
    map += L"#..............#";
    map += L"#..............#";
    map += L"#..............#";
    map += L"#..............#";
    map += L"#..............#";
    map += L"#..............#";
    map += L"#..............#";
    map += L"#..............#";
    map += L"#..............#";
    map += L"#..............#";
    map += L"#..............#";
    map += L"#..............#";
    map += L"################";

    // Game Loop
    while (1)
    {


        screen[nScreenHeight * nScreenHeight - 1] = '\0';
        WriteConsoleOutputCharacter(hConsole, screen, nScreenHeight * nScreenHeight, { 0,0 }, &dwBytesWritten);
    }

    

    return 0;
}

