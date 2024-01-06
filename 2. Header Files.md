# Header Files

<br>

### Header File with Function and Constant Declaration

<blockquote>


<h5 a><strong><code>myheader.h:</code></strong></h5>

```c

#ifndef MYHEADER_H
#define MYHEADER_H

// Function declaration
int add(int a, int b);

// Constant declaration
#define PI 3.14159

#endif

```

</blockquote>
  
<br>

### C File with Function Definition

<blockquote>


<h5 a><strong><code>myfunctions.c:</code></strong></h5>

```c

#include "myheader.h"

// Function definition
int add(int a, int b) {
    return a + b;
}


```

</blockquote>
  
<br>

### The Main Function

<blockquote>


<h5 a><strong><code>main.c:</code></strong></h5>

```c

#include <stdio.h>
#include "myheader.h"

int main() {
    int result = add(3, 5);
    printf("The result is: %d\n", result);
    printf("The value of PI is: %f\n", PI);
    return 0;
}


```

</blockquote>
  
<br>

### Compilation

<blockquote>


<h5 a><strong><code>main.c:</code></strong></h5>

```c

gcc main.c myfunctions.c -o myprogram

```

</blockquote>
  
<br>

---
