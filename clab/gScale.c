#include <stdio.h>
    
void showbits(unsigned int x)
{
   int i; 
   //Because int is 4 bytes we multiply by 8 (8 bits/byte)
   for(i = (sizeof(int) * 8) - 1; i >= 0; i--)
   (x&(1 << i))? printf("1") : printf("0");
    
    printf("\n");
}

void convert_to_grayscale(unsigned int pixelarr[], unsigned int size){
    printf("pix 1: %u pix 2: %u \n", pixelarr[0], pixelarr[1]);
}

int main(int argc, char *argv) 
{

  int j = 5225, m, n, size;
  //Two int values as hex A R G B
  unsigned int pixels [] = {0xAA112233, 0xBB334455};
  size = 2;

  convert_to_grayscale(pixels, 2);
  
   /* assume we have a function that prints a binary string when given 
    * a decimal integer 
    */
   int p;
   for(p = 0; p < size; p++){
      printf("\nThe decimal %u is equal to binary - ", pixels[p]);
      showbits(pixels[p]);

      /* the loop for right shift operation */
      for ( m = 0; m <= 5; m++ ) {
         n = pixels[p] >> m;
         printf("%u right shift %d gives ", pixels[p], m);
         showbits(n);
      }
   }

  printf("\n");

  return 0;
}
