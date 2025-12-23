// math.c
#include <emscripten.h>

// This attribute ensures the function is accessible from JavaScript
EMSCRIPTEN_KEEPALIVE
int add_numbers(int a, int b) {
    return a + b;
}