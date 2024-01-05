# Strings

<br>

### Declaration

<blockquote>

```c
char str1[] = "Hello, World!";
```

```c
char str2[14] = {'H', 'e', 'l', 'l', 'o', ',', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'};
```

```c
char *str3 = "Hello, World!";
```

```c
char str4[14];
strcpy(str4, "Hello, World!");
```

</blockquote>
  
<br>

### Array vs Pointer Access

<blockquote>
  
```c
// Using array index
for (i = 0; i < len; i++) {
    printf(":%c", str[i]);
}

```

```c
// Using pointer and null-termination check
for (p = str; *p != '\0'; p++) {
    printf(":%c", *p);
}

```

</blockquote>
  
<br>

### Comparing Strings

<blockquote>

```c
const char *s1 = "str", *s2 = "str2";

// Comparing memory addresses of the strings
if (s1 == s2) {
    // This condition checks if the memory addresses of s1 and s2 are the same
    // This comparison will likely evaluate to false, as s1 and s2 point to different memory locations
}

// Comparing the first characters of the strings
if (*s1 == *s2) {
    // This condition checks if the first characters of s1 and s2 are the same
    // This comparison will likely evaluate to false, as the first characters of s1 and s2 are 's' and 's2', which are different

// Comparing specific characters of the strings
if (s1[0] == s2[1]) {
    // This condition checks if the first character of s1 is equal to the second character of s2
    // This comparison will likely evaluate to false, as the first character of s1 is 's' and the second character of s2 is 't'

// Using strcmp to compare the entire strings
if (!strcmp(s1, s2)) {
    // This condition checks if the strings s1 and s2 are equal
    // This comparison will likely evaluate to false, as s1 and s2 are different strings

// Using strncmp to compare the first 3 characters of the strings
if (!strncmp(s1, s2, 3)) {
    // This condition checks if the first 3 characters of s1 are equal to the first 3 characters of s2
    // This comparison will likely evaluate to true, as the first 3 characters of s1 and s2 are 'str' and 'str', which are the same
}

```

</blockquote>
  
<br>

### Common String Operations

<blockquote>

 1. `strlen` - String Length
```c
#include <stdio.h>
#include <string.h>

int main() {
    const char *str = "Hello, World!";
    size_t length = strlen(str);
    printf("Length of the string: %zu\n", length);
    return 0;
}
```
The `strlen` function returns the length of the given string, excluding the null-terminator.

<br>

 2. `strcpy` - String Copy
```c
#include <stdio.h>
#include <string.h>

int main() {
    char destination[20];
    const char *source = "Copy me!";
    strcpy(destination, source);
    printf("Copied string: %s\n", destination);
    return 0;
}
```
The `strcpy` function copies the string pointed to by `source` into the array pointed to by `destination`.

<br>

 3. `strchr` - String Character Search
```c
#include <stdio.h>
#include <string.h>

int main() {
    const char *str = "Hello, World!";
    char ch = 'o';
    const char *result = strchr(str, ch);
    if (result != NULL) {
        printf("Character '%c' found at position: %ld\n", ch, result - str);
    } else {
        printf("Character '%c' not found\n", ch);
    }
    return 0;
}
```
The `strchr` function searches for the first occurrence of the character `ch` in the string `str` and returns a pointer to the located character.

<br>

 4. `strtok` - String Tokenization
```c
#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "apple,orange,banana";
    const char *delims = ",";
    char *token = strtok(str, delims);
    while (token != NULL) {
        printf("Token: %s\n", token);
        token = strtok(NULL, delims);
    }
    return 0;
}
```
The `strtok` function breaks the string `str` into a series of tokens using the delimiter `delims`.

</blockquote>
  
<br>

---
