/*
 * Author: Richard Ciampa
 * Date:2/11/2016
 * Class: CST337 SP216
 */
 
#include <stdio.h>
    
void show_bits(unsigned int x){
   int i; 
   //Because int is 4 bytes we multiply by 8 (8 bits/byte)
   for(i = (sizeof(int) * 8) - 1; i >= 0; i--)
   (x&(1 << i))? printf("1") : printf("0");
    
    printf("\n");
}

int convert_to_grayscale(unsigned int rgba){
    int r, g, b, a, mask = 0xff
    
    r = (rgba >> 0) & mask;
    g = (rgba >> 8) & mask;
    b = (rgba >> 16) & mask;
    a = (rgba >> 24) & mask;
}

int main(int argc, char *argv[]){

  //Two int values as hex A R G B
  unsigned int pixels [] = {0xAA112233, 0xBB334455}, m, n, size = 0, p = 0;
  size = 2;

  convert_to_grayscale(*pixels);
  
   for(p = 0; p < size; p++){
      printf("\nThe decimal %u is equal to binary - ", pixels[p]);
      show_bits(pixels[p]);

      /* the loop for right shift operation */
      for (m = 0; m <= 5; m++) {
         n = pixels[p] >> m;
         printf("%u right shift %d gives ", pixels[p], m);
         show_bits(n);
      }
   }

  printf("\n");

  return 0;
}
