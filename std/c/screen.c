#ifdef _WIN32
#include <windows.h>
#endif


// @zh-fn ["fn clrscr", "clrscr"]
void clrscr() {
#ifdef _WIN32
  HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
  COORD coord = {0, 0};
  DWORD count;
  CONSOLE_SCREEN_BUFFER_INFO csbi;
  GetConsoleScreenBufferInfo(hStdOut, &csbi);
  FillConsoleOutputCharacter(hStdOut, ' ', csbi.dwSize.X * csbi.dwSize.Y, coord,
                             &count);
  SetConsoleCursorPosition(hStdOut, coord);
#else
  printf("\033[2J\033[1; 1H");
#endif
}