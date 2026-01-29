#include "standardLibrary/system/systemCalls.h"
#include "standardLibrary/inputOutput.h"

void _start(void) {
    exit(print("Hello, World!\n") ? success : failure);
}