# Basic I/O

<br>

### Print on `stdout`

<blockquote>

```c
#include <stdio.h>

int main() {
    char c = 'A';
    int n = 42;
    unsigned int un = 123;
    float my_float = 3.14;
    char *my_str = "Hello, World!";
    void *my_ptr = &n;

    printf("test: %c %d %u %f %s %p\n", c, n, un, my_float, my_str, my_ptr);

    return 0;
}

```

</blockquote>
  
<br>

### Print on `stderr`

<blockquote>

While printf writes to the standard output stream, fprintf can write to any output stream, such as a file or the standard error stream.

```c
#include <stdio.h>

int main() {
    char c = 'A';
    int n = 42;
    unsigned int un = 123;
    float my_float = 3.14;
    char *my_str = "Hello, World!";
    void *my_ptr = &n;

    fprintf(stderr, "E: %c %d %u %f %s %p\n", c, n, un, my_float, my_str, my_ptr);

    return 0;
}

```

</blockquote>
  
<br>

### Print from `stdin`

<blockquote>

```c
#include <stdio.h>

int main() {
    char my_str[50]; // Assuming a maximum length of 49 characters for the string
    int n;

    printf("Enter a string and an integer: ");
    scanf("%49s:%d", my_str, &n); // Read a string and an integer from the user

    printf("You entered: %s and %d\n", my_str, n);

    return 0;
}

```

In this example, the %49s format specifier is used to read a string of up to 49 characters (to avoid buffer overflow) and the :%d format specifier is used to read an integer.

</blockquote>
  
<br>

### String formatting

<blockquote>

The functions sprintf and sscanf are similar to printf and scanf, but they operate on strings instead of the standard input and output streams.

```c
#include <stdio.h>

int main() {
    char str[50]; // Assuming a maximum length of 49 characters for the string
    int n = 123;

    // Using sprintf to format an integer as a string
    sprintf(str, "%d", n);
    printf("The formatted string is: %s\n", str);

    // Using sscanf to parse the formatted string and extract an integer
    sscanf(str, "%d", &n);
    printf("The extracted integer is: %d\n", n);

    return 0;
}

```

</blockquote>
  
<br>

---
