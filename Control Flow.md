# Control Flow

<br>

### Conditional Statement

<blockquote>

```c
if (done) {
    exit(1);
} else {
    continue;
}

int max = x > y ? x : y;
```

</blockquote>
  
<br>

### Loops

<blockquote>

```c
// while loop
while (i < count) {
    foo();
    i++;
}

// do-while loop
do {
    foo();
    i++;
} while (i < count);

// for loop
for (i = 0; i < count; i++) {
    foo();
}

// for-each loop
int arr[] = {1, 2, 3, 4, 5};
for (int num : arr) {
    printf("%d\n", num);
}
```

</blockquote>
  
<br>

### Switch Statement

<blockquote>

Switch statements in C work with integer and character types.

```c
int value = 2;
switch (value) {
    case 1:
        foo();
        break;
    case 2:
        bar();
        break;
    default:
        baz();
        break;
}

char grade = 'B';
switch (grade) {
    case 'A':
        printf("Excellent");
        break;
    case 'B':
        printf("Good");
        break;
    default:
        printf("OK");
        break;
}

```

</blockquote>
  
<br>

---
