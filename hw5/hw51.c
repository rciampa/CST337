/*
 * Author: Richard Ciampa
 * Course: CST337
 * Date: 2/18/2016
 */

#include <stdio.h>
#include <string.h>

char and_gate(char a, char b);

int main(int argc, char *argv[]){
 
 if(argc == 3 && (strlen(argv[1]) == strlen(argv[2]))){
  //We only need the size of one because they are equal   
  size_t argSize = strlen(argv[1]);
  //Print the result
  printf("Result of AND: ");
  //Loop through the command line args 
  for(int i = 0; i < argSize; i++){
  //Print the result
  printf("%c", and_gate(argv[1][i], argv[2][i]) );
  }
  printf("\n");
 }
  return 0;
}

char and_gate(char a, char b){ 
   if(a == '0' || b == '0'){
     return '0';
   }else{
     return '1';
   }
}
