# Returning Pointers

<br>

### Case 1 - Returning a pointer to an allocated character array

<blockquote>

```c
char* foo() {
    char *c = malloc(1024);
    return c;
}

```

It's important to note that the memory allocated with malloc should be explicitly freed using free when it's no longer needed to avoid memory leaks.

</blockquote>
  
<br>

### Case 2 - Returning a pointer to a static variable

<blockquote>

```c
char* foo() {
    static char c = 'X';
    return &c;
}

```

It's important to be cautious when returning pointers to static variables, as they are shared across all calls to the function. This can lead to unexpected behavior if the pointer is used after the function has returned.

</blockquote>
  
<br>

### Cace 3 - Returning a pointer to a local variable

<blockquote>

```c
char* foo() {
    char c = 'X';
    return &c; // Problem?
}

```

In this example, the function foo attempts to return a pointer to a local variable c. This is problematic because c is a local variable, and its memory is deallocated when the function returns. Therefore, returning a pointer to a local variable leads to undefined behavior, as the memory it points to may be reused for other purposes once the function exits.

</blockquote>
  
<br>

---
