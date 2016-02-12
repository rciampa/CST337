
#include <stdio.h>


int main(int argc, char argv){

int i = 5, j;
int *p, *q;

p = &i;
q = &j;
j = 5;

printf("%d %d", *p, *q);

return 0;

}
