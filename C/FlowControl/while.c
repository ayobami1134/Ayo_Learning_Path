#include <stdio.h>

int main(){
  int a = 100;
  int b = 3;

  printf("Multiples of 3: ");
  while(b < a){
    printf("%d ", b);
    b += 3;
  }
  printf("\n");
  
  return 0;
}