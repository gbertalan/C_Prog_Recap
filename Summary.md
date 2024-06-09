# Summary

<blockquote>
This is a collection of the most important information (code) from chapters 1 to 14.
<br><br>
To learn more or to get an explanation of the code below, please refer to the corresponding chapter's markdown files.
</blockquote>

### 1. Compilation

```c
#include <stdio.h>

int main() {
  printf("Hello, world!\n");
  return 0;
}
```

```
gcc hello.c -Wall -o hello_world.out
```

```
gcc hello.c -g -o hello_world.out
gdb hello_world.out
```

```
gcc input.c -S -o output.s
```

### 2. Header Files

```c
#ifndef MYHEADER_H
#define MYHEADER_H

#endif
```

### 3. Variables

```c
#define PI 3.14
```
```c
const int c = 47;
```
```c
int age = 18;
```
```c
extern int x;
```
```c
static int x = 0;
```

### 4. Functions

```c
int add(int a, int b) {
    return a + b;
}
```
```c
void constArgFunction(const int *ptr);
```
```c
static int privateFunction();
```
```c
#define DOUBLE(X) (X*2)
```
```c
void variadicFunction(int n, ...) {
    va_list list;                     
    va_start(list, n);                
    for (int i = 0; i < n; i++) {      
        int value = va_arg(list, int);
        printf("%d ", value);
    }
    va_end(list);
}
```

### 5. Control Flow
```c
if (x > y) {
    return x;
} else {
    return y;
}
```
```c
int max = x > y ? x : y;
```
```c
while (i < count) {
    foo(i);
    i++;
}
```
```c
do {
    foo(i);
    i++;
} while (i < count);

```
```c
for (int i = 0; i < count; i++) {
    foo(i);
}

```
```c
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
### 6. Operators
```c
int x = 5; // 101 in binary
    int y = 3; // 011 in binary
    int bitwise_not = ~x; // 11111111111111111111111111111010 in binary
    int bitwise_and = x & y; // 1 in binary
    int bitwise_or = x | y; // 111 in binary
    int bitwise_xor = x ^ y; // 110 in binary
    int left_shift = x << 1; // 1010 in binary (Left shift operation)
    int right_shift = x >> 1; // 10 in binary (Right shift operation)
```
### 7. Types
```c
typedef int myInt;

typedef struct {
} MyStruct

typedef int* myIntPointer;
```
```c
char, int, short, long, float, double
```
```c
// Create a structure called myStructure
struct myStructure {
  int myNum;
};

int main() {
  struct myStructure s;
  s.myNum = 13;
  return 0;
}
```
```c
float myFloat = 3.14;
int x = (int)myFloat;
```
```c
sizeof(int)
```

```c
struct my_struct
{
    int b;
    char c;
};

int main()
{
    struct my_struct complex_struct[2] = {{1, 'A'}, {2, 'B'}};
    return 0;
}
```

```c
union myUnion {
  int x;
  float y;
} u;

u.x = 10;
u.y = 3.14;
```

```c
enum day {MON, TUE, WED, THU, FRI, SAT, SUN};
enum day today = FRI;

printf("Today is day %d\n", today); // prints: "Today is day 4"

if (today == FRI) {
  printf("It's Friday!\n");
}
```
### 8. Arrays
```c
int numbers[5] = {1, 2, 3, 4, 5};
```
```c
int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
```
### 9. Pointers

### 10. Memory Management

### 11. Strings

### 12. Function Argument Passing

### 13. Returning Pointers

### 14. Basic IO




