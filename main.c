#include <stdio.h>
#include <stdlib.h>
#include "global.h"

void doSomething();
void doSomething2();

int main(int argc, char* argv[]) {
    x = 100;
    printf(" main says x is %d\n", x);
    doSomething();
    doSomething2();
    return 0;
}