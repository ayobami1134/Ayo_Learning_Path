#include <stdio.h>

int main(){
  int num = 100;
  int sum = 0;
  int i;

  for(i=num; i>25; i--){
    sum += i;
  }

  printf("Sum of numbers from 100 to 26 is: %d\n", sum);

  return 0;
}