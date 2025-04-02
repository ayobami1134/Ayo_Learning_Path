#include <stdio.h>

int main(){
  int a = 100;
  int b = 10;

  printf("Multiples of 10: ");
  do {
    printf("%d ", b);
    b += 10;
    if(b == 50){
      break;
    }
  }
  while(b < a);
  printf("\n");
  
  return 0;
}