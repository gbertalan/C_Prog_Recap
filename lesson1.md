# Variables

<br>

### Symbolic Constants

<blockquote>

```
#define PI 3.14
```
The word PI will be replaced by 3.14 everywhere in the source file. Use symbolic constants (typically placed in the header file) to avoid "magic numbers".

</blockquote>

<br>

### Declaration, Definition, Initialization

<blockquote>

**Declaration:** *type* and *name* of the variable

**Definition:** *space* in memory and *address* of that space, together with the *declaration*

**Initialization:** assignment of an initial *value* to a variable

```
int age = 18;
```

</blockquote>

<br>

### Local and Global Variables

<blockquote>

Follow the execution path, to see what is happening:

<h5 a><strong><code>main.c:</code></strong></h5>

```c
#include <stdio.h>

int x; // global variable

void function()
{
    printf("print3: x is %d\n", x); // still 5.

    {
        x = 12;
    }
    printf("print4: x is %d\n", x); // 12.

    x = 20;
    printf("print5: x is %d\n", x); // 20.

    int x; // local variable
    printf("print6: x is %d\n", x); // garbage, because local variables are not automatically initialized.

    x = x;
    printf("print7: x is %d\n", x); // same garbage.

    {
        x = 12;
    }
    printf("print8: x is %d\n", x); // 12.

    x = x + 1;
    printf("print9: x is %d\n", x); // 13.
}

int main(int argc, char **argv)
{
    printf("print1: x is %d\n", x); // 0, because global variables are automatically initialized to 0.

    x = x + 5;
    printf("print2: x is %d\n", x); // 5.

    function();

    return 0;
}
```

</blockquote>

### External Variables

<blockquote>

An **external variable** is a variable that has been *declared but not defined*. It means it has no space allocated for it.
```
extern int x;
```

<br>

External variables are useful when having multiple source files.

It is recommended to place the external variables into a header file, if the variables are used in multiple files. Here I separate the global variables into a global.c file.

<h5 a><strong><code>main.c:</code></strong></h5>

```c
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

<h5 a><strong><code>main2.c:</code></strong></h5>

```c
#include <stdio.h>
#include "global.h"

void do_something() {
    x = 150;
    printf("main2 says x is %d\n", x);
}
```

<h5 a><strong><code>main3.c:</code></strong></h5>

```c
#include <stdio.h>
#include "global.h"

void do_something2() {
    x = 42;
    printf("main3 says x is %d\n", x);
}
```

<h5 a><strong><code>global.c:</code></strong></h5>

```c
int x;
```

<h5 a><strong><code>global.h:</code></strong></h5>

```c
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

<br>

Please note that the scope of variables should be as small as possible to avoid unnecessarily increasing code complexity. It means that you should try to avoid using external and global variables if you can.

</blockquote>

---
