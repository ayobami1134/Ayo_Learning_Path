#include <stdio.h>

int main(){
  float num, avg, sum = 0;
  int count = 0;

  for(;;){
    printf("Enter a number: ");
    scanf("%f", &num);
    if(num < 0){
      goto pos1;
    }
    sum += num;
    count++;
  }

  pos1:
    if(count > 0){
      avg = sum / count;
      printf("Average of entered numbers: %.2f\n", avg);
      printf("Sum of entered numbers: %.2f\n", sum);
    } else {
      printf("No positive numbers were entered.\n");
    }
  return 0;
}