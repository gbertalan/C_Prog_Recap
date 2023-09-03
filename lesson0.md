### Code Example

```c
#include <stdio.h>

int main() {
  printf("Hello, world!\n");
  return 0;
}
```

### Basic compilation:
gcc lesson0.c -o hello_world.out

### Run:
./hello_world.out

### Useful options:

- **Wall**: This option enables all warnings. This is a good option to use because it will help you to find potential errors in your code.
- **Wextra**: This option enables additional warnings that are not enabled by default. This is a good option to use if you are experienced with C and want to be extra careful.
- **pedantic**: This option enables all warnings, even those that are considered to be "pedantic". This is a good option to use if you are writing code that will be used in a critical application.
- **pedantic-errors**: same as the previous, but gives errors instead of warnings.
- **Werror**: This option turns all warnings into errors. This is a good option to use if you want to be sure that your code is free of errors.
- **O3**: This option optimizes the code for speed. This is a good option to use if you are concerned about the performance of your code.
- **g**: This option adds debugging information to the code. This is a good option to use if you are debugging your code.

E.g.:

**gcc lesson0.c -pedantic -o hello_world.out**

### Option Order

In some cases the order of the options can matter. For example with the -O options:

```
gcc -O2 -O3 lesson0.c
gcc -O3 -O2 lesson0.c
```
