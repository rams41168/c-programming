#include <stdio.h>

int main() {
int a = 5;
int b = -a; // Unary minus
int c = ++a; // Pre-increment
int d = a--; // Post-decrement
printf("b = %d\n", b);
printf("c = %d\n", c);
printf("d = %d\n", d);
printf("Current a = %d\n", a);

return 0;
}
