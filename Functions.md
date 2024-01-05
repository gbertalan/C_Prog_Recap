# Functions

<br>

### Declaration, Definition, Calling

<blockquote>

<h5 a><strong><code>main.c:</code></strong></h5>

```c
#include <stdio.h>

// Function declaration
int add(int a, int b);

int main() {
    int result = add(3, 5); // Function call
    printf("The result is: %d\n", result);
    return 0;
}

// Function definition
int add(int a, int b) {
    return a + b;
}

```

</blockquote>
  
<br>

### Private Functions

<blockquote>

When a function is declared as *static*, it is only visible within the same source file and cannot be accessed from other source files.

<h5 a><strong><code>myfunctions.c:</code></strong></h5>

```c

#include "myheader.h"

// Public function definition
int publicFunction(int a, int b) {
    return a + b;
}

// Private function definition
static int privateFunction(int x, int y) {
    return x * y;
}

```

</blockquote>
  
<br>

### Macros As Functions

<blockquote>

When you use the SQUARE macro in your code, the preprocessor replaces every occurrence of SQUARE(X) with (X*2) before the code is compiled.

<h5 a><strong><code>main.c:</code></strong></h5>

```c
#include <stdio.h>

#define SQUARE(X) (X*2)

int main() {
    int num = 5;
    int result = SQUARE(num);
    printf("The result is: %d\n", result);
    return 0;
}

```

</blockquote>
  
<br>


---
