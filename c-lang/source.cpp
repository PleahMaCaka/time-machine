#include <Windows.h>

#define DEFAULT_PAST_TIME_SECONDS -1000

void GoPast(int sec = DEFAULT_PAST_TIME_SECONDS) {
    sec *= 1000;
    Sleep(sec);
    // do something you want!
}