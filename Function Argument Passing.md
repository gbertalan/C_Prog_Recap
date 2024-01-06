# Function Argument Passing

<br>

Function arguments can be passed by value or by reference. When an argument is passed by value, a copy of the argument's value is passed to the function. When an argument is passed by reference, the function receives a pointer to the original argument, allowing the function to modify the original value.

### Passing by Value

<blockquote>

<h5 a><strong><code>main.c:</code></strong></h5>

```c
#include <stdio.h>

void increment(int x) {
    x++;
    printf("Inside function: %d\n", x);
}

int main() {
    int num = 5;
    increment(num);
    printf("Outside function: %d\n", num);
    return 0;
}

```

</blockquote>
  
<br>

### Passing by Reference

<blockquote>

<h5 a><strong><code>main.c:</code></strong></h5>

```c
#include <stdio.h>

void increment(int *x) {
    (*x)++;
}

int main() {
    int num = 5;
    increment(&num);
    printf("Modified value: %d\n", num);
    return 0;
}

```

</blockquote>
  
<br>

---
