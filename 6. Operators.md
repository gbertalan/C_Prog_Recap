# Operators

<br>

### Assignment Operator

<blockquote>

<h5 a><strong><code>main.c:</code></strong></h5>

```c
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    int x = 5;
    int y;

    y = x; // Assign the value of x to y

    printf("The value of y is: %d\n", y); // Output: The value of y is: 5

    return 0;
}

```

</blockquote>
  
<br>

### Arithmetic Operators

<blockquote>

<h5 a><strong><code>main.c:</code></strong></h5>

```c
#include <stdio.h>

int main() {
    int x = 10;
    int y = 5;
    int sum = x + y;
    int difference = x - y;
    int product = x * y;
    int quotient = x / y;
    int remainder = x % y;
    x++;
    y--;
    x += 5;
    return 0;
}

```

</blockquote>
  
<br>

### Relational Operators

<blockquote>

<h5 a><strong><code>main.c:</code></strong></h5>

```c
#include <stdio.h>

int main() {
    int a = 10;
    int b = 20;
    if (a > b) {
        printf("a is greater than b\n");
    }
    if (a >= b) {
        printf("a is greater than or equal to b\n");
    }
    if (a <= b) {
        printf("a is less than or equal to b\n");
    }
    if (a < b) {
        printf("a is less than b\n");
    }
    if (a == b) {
        printf("a is equal to b\n");
    }
    if (a != b) {
        printf("a is not equal to b\n");
    }
    return 0;
}

```

</blockquote>
  
<br>

### Logical Operators

<blockquote>

<h5 a><strong><code>main.c:</code></strong></h5>

```c
#include <stdio.h>

int main() {
    int x = 1;
    int y = 0;
    if (!x) {
        printf("Not x\n");
    }
    if (x && y) {
        printf("Both x and y are true\n");
    }
    if (x || y) {
        printf("Either x or y is true\n");
    }
    return 0;
}

```

</blockquote>
  
<br>

### Bitwise Operators

<blockquote>

<h5 a><strong><code>main.c:</code></strong></h5>

```c
#include <stdio.h>

int main() {
    int x = 5; // 101 in binary
    int y = 3; // 011 in binary
    int bitwise_not = ~x;
    int bitwise_and = x & y;
    int bitwise_or = x | y;
    int bitwise_xor = x ^ y;
    int left_shift = x << 1; // 1010 in binary
    int right_shift = x >> 1; // 10 in binary
    return 0;
}

```

</blockquote>
  
<br>

---
