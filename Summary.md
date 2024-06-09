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
```c
int x = 5;
printf("%d", x);
printf("%p", &x);

int* ptr = &x;
printf("%p", ptr);
printf("%d", *ptr);
```
```c
int myNumbers[4] = {25, 50, 75, 100};
*(myNumbers + 1) = 17;

int length = sizeof(myNumbers) / sizeof(myNumbers[0]);

int *ptr = myNumbers;
int *last = myNumbers + length - 1;

for (int *p = ptr; p <= last; p++) {
  printf("%d ", *p);
}
```
```c
int myInt = 10;
double *doublePtr;
doublePtr = (double*)&myInt;
```
```c
int var = 5;
int *ptr = &var;
int **pptr = &ptr;
```
```c
typedef struct {
    int x;
    char c;
} MyStruct;

int main() {
    MyStruct s = {10, 'A', 3.14};
    MyStruct *basePtr = &s;
    char *interiorPtr = &s.c;

    printf("Value of x using base pointer: %d\n", basePtr->x);
    printf("Value of c using interior pointer: %c\n", *interiorPtr);

    return 0;
}
```

```c
int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int main() {
    int (*operation)(int, int);

    operation = &add;

    int result = operation(5, 3);

    operation = &subtract;

    result = operation(5, 3);

    return 0;
}
```
### 10. Memory Management
```c
int main() {
    int *ptr;
    int n = 5;

    ptr = (int*)malloc(n * sizeof(int));
    if (ptr == NULL) {
        return 1;
    }

    free(ptr);

    return 0;
}
```
```c
int main() {
    int *ptr;
    int n = 5;

    ptr = (int*)calloc(n, sizeof(int));
    if (ptr == NULL) {
        return 1;
    }

    free(ptr);

    return 0;
}
```
```c
int main() {
    int *ptr;
    int n = 5;

    ptr = (int*)malloc(n * sizeof(int));
    if (ptr == NULL) {
        return 1;
    }

    ptr = (int*)realloc(ptr, 10 * sizeof(int));
    if (ptr == NULL) {
        return 1;
    }

    free(ptr);

    return 0;
}
```
### 11. Strings
```c
char str1[] = "Hello, World!";
char str2[14] = {'H', 'e', 'l', 'l', 'o', ',', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'};
char *str3 = "Hello, World!";
char str4[14];
strcpy(str4, "Hello, World!");
```
```c
for (i = 0; i < len; i++) {
    printf(":%c", str[i]);
}

for (p = str; *p != '\0'; p++) {
    printf(":%c", *p);
}

```
```c
if(...) {}

s1 == s2
*s1 == *s2
s1[0] == s2[1]
!strcmp(s1, s2)
!strncmp(s1, s2, 3)
```
```c
const char *str = "Hello, World!";
size_t length = strlen(str);

char destination[20];
const char *source = "Copy me!";
strcpy(destination, source);

const char *str = "Hello, World!";
char ch = 'o';
const char *result = strchr(str, ch);
if (result != NULL) {
  printf("Character '%c' found at position: %ld\n", ch, result - str);
} else {
  printf("Character '%c' not found\n", ch);
}

char str[] = "apple,orange,banana";
const char *delims = ",";
char *token = strtok(str, delims);
while (token != NULL) {
  printf("Token: %s\n", token);
  token = strtok(NULL, delims);
}
```
### 12. Function Argument Passing
```c
void increment(int x) {
    x++;
}
void increment(int *x) {
    (*x)++;
}
void printArray(int arr[]) {

}
void modifyArray(int *arr) {

}

int main() {
    int num = 5;
    increment(num);
    increment(&num);
    printArray(num);
    modifyArray(num);
    return 0;
}
```
### 13. Returning Pointers
```c
char* foo() {
    char *c = malloc(1024);
    return c;
}
```
```c
char* foo() {
    static char c = 'X';
    return &c;
}

```
```c
char* foo() {
    char c = 'X';
    return &c; // Problem?
}

```
### 14. Basic IO
```c
char c = 'A';
int n = 42;
unsigned int un = 123;
float my_float = 3.14;
char *my_str = "Hello, World!";
void *my_ptr = &n;

printf("test: %c %d %u %f %s %p\n", c, n, un, my_float, my_str, my_ptr);
fprintf(stderr, "E: %c %d %u %f %s %p\n", c, n, un, my_float, my_str, my_ptr);
```
```c
char my_str[50]; // Assuming a maximum length of 49 characters for the string
int n;
scanf("%49s:%d", my_str, &n); // Read a string and an integer from the user
```
```c
char str[50]; // Assuming a maximum length of 49 characters for the string
int n = 123;

// integer -> string
sprintf(str, "%d", n);
// string -> integer
sscanf(str, "%d", &n);
```
```c
FILE *file = fopen("example.txt", "w");
fputc('A', file);
fputs("Hello, World!", file);
fclose(file);
```
```c
FILE *file = fopen("data.bin", "wb");
if (file != NULL) {
  int numbers[] = {1, 2, 3, 4, 5};

  fwrite(numbers, sizeof(int), 5, file);

  fclose(file);
} else {
  printf("Failed to open the file.\n");
}
```
```c
FILE *file = fopen("example.txt", "w");
float pi = 3.14159;
fprintf(file, "The value of pi is: %.2f", pi);
fclose(file);
```
```c
FILE *file = fopen("example.txt", "r");
int ch;
ch = fgetc(file);

char line[100];
fgets(line, 100, file);

fclose(file);
```
```c
FILE *file = fopen("example.txt", "r");
int numbers[5];
fread(numbers, sizeof(int), 5, file);
printf("Read numbers:");
for (int i = 0; i < 5; i++) {
  printf(" %d", numbers[i]);
}
printf("\n");
fclose(file);
```
```c
FILE *file = fopen("example.txt", "r");
float pi;
fscanf(file, "The value of pi is: %f", &pi);
printf("Read value of pi: %.2f\n", pi);
fclose(file);
```
