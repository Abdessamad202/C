#include <stdio.h>
int main () {
  int number ;
  printf("enter the number :");
  scanf("%d",&number);
  int rest = number ;
  int i = 0;
  int sum = 0 ;
  do{
    i++;
    sum += rest % 10;
    rest = rest / 10 ;
  }while (rest != 0);
  printf("the number of digits of %d\n",i);
  printf("the sum of digits of %d",sum);
  return 0 ;
}