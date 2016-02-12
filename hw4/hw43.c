
#include <stdio.h>


int main() {

int a = 5, b = 10, c = 0;
int *p = &a, *q = &b;

c = p - q;

printf("%d %d %d\n", c, p, q);

return 0;

}
