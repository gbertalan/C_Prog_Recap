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

### Passing Arrays to Functions

<blockquote>

Arrays are typically passed to functions by reference, even though array names decay into pointers to their first elements:

```c
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
}

int main() {
    int numbers[] = {1, 2, 3, 4, 5};
    printArray(numbers, 5); // Passes the array to the function
    return 0;
}
```

</blockquote>

<blockquote>

We can also pass an array to a function using a pointer:

```c
#include <stdio.h>

void modifyArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        arr[i] *= 2;
    }
}

int main() {
    int numbers[] = {1, 2, 3, 4, 5};
    modifyArray(numbers, 5);
    for (int i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
    }
    return 0;
}

```

</blockquote>
  
<br>

---
