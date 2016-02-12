#include <stdio.h>
    
void showbits(unsigned int x)
{
   int i; 
   for(i=(sizeof(int)*8)-1; i>=0; i--)
   (x&(1<<i))?printf("1"):printf("0");
    
    printf("\n");
}

int main(int argc, char *argv) 
{
   int j = 5225, m, n;
   printf("\nThe decimal %d is equal to binary - ", j);
   /* assume we have a function that prints a binary string when given 
    * a decimal integer 
    */
   showbits(j);

   /* the loop for right shift operation */
   for ( m = 0; m <= 5; m++ ) {
      n = j >> m;
      printf("%d right shift %d gives ", j, m);
      showbits(n);
   }

  printf("\n");

  return 0;
}
