# Variables

### Symbolic Constants

```
#define PI 3.14
```
The word PI will be replaced by 3.14 everywhere in the source file. Use symbolic constants (typically placed in the header file) to avoid "magic numbers".

---
### Declaration and Definition

**Declaration:** *type* and *name* of the variable

**Definition:** *space* in memory and *address* of that space, together with the *declaration*

```
int age = 18;
```

---
### External and Global Variables
(Typically in header)

An **external variable** is a variable that has been *declared but not defined*. It means it has no space allocated for it.
```
extern int x;
```

---
External variables are useful when having multiple source files.

```c main.c
#include <stdio.h>
#include <stdlib.h>

int x;
void doSomething();

int main(int argc, char* argv[]) {
    x = 100;
    printf(" main says x is %d\n", x);
    doSomething();
    return 0;
}
```

```c main2.c
#include <stdio.h>

extern int x;

void doSomething() {
    x = 150;
    printf("main2 says x is %d\n", x);
}
```
---
It is recommended to place the external variables into a header file, if the variables are used in multiple files. Here are separate the global variables into a global.c file.

```c main.c
#include <stdio.h>
#include <stdlib.h>
#include "global.h"

void do_something();
void do_something2();

int main(int argc, char* argv[]) {
    x = 100;
    printf(" main says x is %d\n", x);
    do_something();
    do_something2();
    return 0;
}
```

```c main2.c
#include <stdio.h>
#include "global.h"

void do_something() {
    x = 150;
    printf("main2 says x is %d\n", x);
}
```

```c main3.c
#include <stdio.h>
#include "global.h"

void do_something2() {
    x = 42;
    printf("main3 says x is %d\n", x);
}
```

```c global.c
int x;
```

```c global.h
extern int x;
```

Compile with:
```
gcc main.c main2.c main3.c global.c -o output
```

Output:
```
 main says x is 100
main2 says x is 150
main3 says x is 42
```