#include <stdio.h>
int main () {
  int number ;
  printf("enter the number : ");
  scanf("%d",&number);
  int factorial = number;
  for (int i = 1; i < number; i++)
  {
    /* code */
    factorial *= i ;
  }
  printf("the factorial of %d is %d .", number,factorial);

  return 0 ;

}