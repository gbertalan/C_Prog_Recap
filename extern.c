#include <stdio.h>
extern int x = 3;
int b = 2;
int main() {
   auto int a = 1;
   extern int b;
   printf("The value of auto variable : %d\n", a);
   printf("The value of extern variables x and b : %d,%d\n",x,b);
   x = 42;
   printf("The value of modified extern variable x : %d\n",x);
   return 0;
}