#include <stdio.h>

int main(){
  int a = 100;
  int b = 3;

  printf("Multiples of 3 that are even: ");
  while(b < a){
    if(b % 2 != 0){
      b += 3;
      continue;
    }
    printf("%d ", b);
    b += 3;
  }
  printf("\n");
  
  return 0;
}