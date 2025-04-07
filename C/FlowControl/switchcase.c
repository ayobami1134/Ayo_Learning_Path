// #include <stdio.h>

// int main(){
//   char op;
//   double num1, num2, result;
//   printf("Enter an operator (+, -, *, /): ");
//   scanf(" %c", &op);
//   printf("Enter two numbers: ");
//   scanf("%lf %lf", &num1, &num2);

//   switch (op)
//   {
//   case '+':
//     printf("Result: %.2lf\n", num1 + num2);
//     break;
//   case '-':
//     printf("Result: %.2lf\n", num1 - num2);
//     break;
//   case '*':
//     printf("Result: %.2lf\n", num1 * num2);
//     break;
//   case '/':
//     if (num2 != 0)
//       printf("Result: %.2lf\n", num1 / num2);
//     else
//       printf("Error! Division by zero.\n");
//     break;
//   default:
//     printf("Error! Invalid operator.\n");
//     break;
//   }
//   return 0;
// }

#include <stdio.h>
#include <stdlib.h>

int main()
{
  char op;
  double num1, num2, result;
  int valid = 0;

  while (1)
  {
    printf("Enter a valid number: ");
    if (scanf("%lf", &num1) != 1)
    {
      printf("Error: Invalid number!\n");
      while (getchar() != '\n')
        ; // Clear invalid input
    }
    else
    {
      break;
    }
  }

  while (1)
  {
    printf("Enter another valid number: ");
    if (scanf("%lf", &num2) != 1)
    {
      printf("Error: Invalid number!\n");
      while (getchar() != '\n')
        ; // Clear invalid input
    }
    else
    {
      break;
    }
  }

  while (1)
  {
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);

    switch (op)
    {
    case '+':
      valid = 1;
      result = num1 + num2;
      break;
    case '-':
      valid = 1;
      result = num1 - num2;
      break;
    case '*':
      valid = 1;
      result = num1 * num2;
      break;
    case '/':
      valid = 1;
      if (num2 != 0)
      {
        result = num1 / num2;
      }
      else
      {
        printf("Error: Division by zero!\n");
        return 1;
      }
      break;
    default:
      printf("Error: Invalid operator!\n");
      while (getchar() != '\n')
        ; // Clear invalid input
    }
    if (valid)
    {
      break;
    }
  }

  printf("Result: %.2f\n", result);

  return 0;
}