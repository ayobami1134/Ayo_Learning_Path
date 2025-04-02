#include <stdio.h>

int main(){
  int a = 0;

  for(int i = 1; i > 0; i+=3){
    a += i;
    printf("a: %d\n", a);
    if(i >= 99){
      break;
    }
  }

  printf("Sum of numbers from 0 to 9 is: %d\n", a);

  return 0;
}