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

// @zh-type ["bool _", "clock_t"]
// @zh-fn ["fn clock_t clock", "clock"]
// @zh-fn ["fn int dif clock_t a clock_t b", "dif_clock_t"]
long long dif_clock_t(clock_t a, clock_t b) {
  return a - b;
}
