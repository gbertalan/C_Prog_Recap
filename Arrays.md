# Arrays

<br>

### Declaration

<blockquote>

```c
int numbers[5]; // Declares an array of 5 integers
```

</blockquote>
  
<br>

### Initialization

<blockquote>

```c
int numbers[5] = {1, 2, 3, 4, 5}; // Initializes an array of 5 integers

```

</blockquote>
  
<br>

### Accessing Elements of an Array

<blockquote>

```c
int x = numbers[2]; // Accesses the third element of the array (index 2)
```

</blockquote>
  
<br>

### Iterating over an Array

<blockquote>

```c
for (int i = 0; i < 5; i++) {
    printf("%d ", numbers[i]); // Prints each element of the array
}

```

</blockquote>
  
<br>

### Multidimensional Arrays

<blockquote>

```c
int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
```

</blockquote>
  
<br>

### Passing Arrays to Functions

<blockquote>

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
  
<br>

### Dynamic Arrays

<blockquote>

See lectures about pointers and memory allocation.

</blockquote>
  
<br>

---
