#ifdef _WIN32
#include <conio.h>
#else
// Linux Libraries
#include <fcntl.h>
#include <stdlib.h>
#include <termios.h>
#include <unistd.h>

int kbhit(void) {
  struct termios oldt, newt;
  int ch;
  int oldf;

  tcgetattr(STDIN_FILENO, &oldt);
  newt = oldt;
  newt.c_lflag &= ~(ICANON | ECHO);
  tcsetattr(STDIN_FILENO, TCSANOW, &newt);
  oldf = fcntl(STDIN_FILENO, F_GETFL, 0);
  fcntl(STDIN_FILENO, F_SETFL, oldf | O_NONBLOCK);

  ch = getchar();

  tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
  fcntl(STDIN_FILENO, F_SETFL, oldf);

  if (ch != EOF) {
    ungetc(ch, stdin);
    return 1;
  }

  return 0;
}

char getch() {
  char c;
  system("stty raw");
  c = getchar();
  system("stty sane");
  return (c);
}
#endif

// @zh-fn ["fn int kbhit", "kbhit"]
// @zh-fn ["fn char getch", "getch"]