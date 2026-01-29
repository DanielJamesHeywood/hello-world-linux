#include "standardLibrary/system/systemCalls.h"
#include "standardLibrary/inputOutput.h"

void start(void) {
    exit(print("Hello, World!\n") ? success : failure);
}