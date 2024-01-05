# Memory Management

<br>

### Allocating Memory - `malloc`

<blockquote>

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    int n = 5;

    // Allocate memory for an array of 5 integers
    ptr = (int*)malloc(n * sizeof(int));

    if (ptr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Use the allocated memory
    for (int i = 0; i < n; i++) {
        ptr[i] = i + 1;
    }

    // Free the allocated memory
    free(ptr);

    return 0;
}

```

Do not forget to *free* allocated memory, when it is not needed anymore.

</blockquote>

<br>

### Allocating and Initializing Memory - `calloc`

<blockquote>

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    int n = 5;

    // Allocate memory for an array of 5 integers and initialize to 0
    ptr = (int*)calloc(n, sizeof(int));

    if (ptr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Use the allocated memory
    for (int i = 0; i < n; i++) {
        printf("%d ", ptr[i]); // Output: 0 0 0 0 0
    }

    // Free the allocated memory
    free(ptr);

    return 0;
}


```

</blockquote>

<br>

### Resizing Allocated Memory - `realloc`

<blockquote>

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    int n = 5;

    // Allocate memory for an array of 5 integers
    ptr = (int*)malloc(n * sizeof(int));

    if (ptr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Use the allocated memory
    for (int i = 0; i < n; i++) {
        ptr[i] = i + 1;
    }

    // Reallocate memory for an array of 10 integers
    ptr = (int*)realloc(ptr, 10 * sizeof(int));

    if (ptr == NULL) {
        printf("Memory reallocation failed\n");
        return 1;
    }

    // Free the allocated memory
    free(ptr);

    return 0;
}


```

</blockquote>

<br>

---
