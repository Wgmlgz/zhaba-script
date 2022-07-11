#ifdef _WIN32
#include <unistd.h>
#else
#include <windows.h>
#endif
#include <time.h>

// @zh-fn ["fn sleep int time", "zh_sleep"]
void zh_sleep(long long sleepMs) {
#ifdef _WIN32
  Sleep(sleepMs);
#else
  usleep(sleepMs * 1000);
#endif
}

// @zh-fn ["fn int clock", "clock"]
// @zh-fn ["fn int dif int a int b", "dif_clock_t"]
long long dif_clock_t(int a, int b) {
  return a - b;
}
