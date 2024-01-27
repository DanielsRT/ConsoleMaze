#include <iostream>
using namespace std;

#include <Windows.h>

int nScreenWidth = 120;
int nScreenHeight = 40;

int main()
{
    // Create Screen buffer
    wchar_t *screen = new wchar_t[nScreenHeight * nScreenHeight];
    HANDLE hConsole = CreateConsoleScreenBuffer(GENERIC_READ | GENERIC_WRITE, 0, NULL, CONSOLE_TEXTMODE_BUFFER, NULL);
    SetConsoleActiveScreenBuffer(hConsole);
    DWORD dwBytesWritten = 0;

    screen[nScreenHeight * nScreenHeight - 1] = '\0';
    WriteConsoleOutputCharacter(hConsole, screen, nScreenHeight * nScreenHeight, { 0,0 }, &dwBytesWritten);

    return 0;
}

