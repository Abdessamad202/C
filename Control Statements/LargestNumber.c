#include <stdio.h>
int main () {
  int num1,num2,num3;
  printf("Enter The 1st :");
  scanf("%d",&num1);
  printf("Enter The 2st :");
  scanf("%d",&num2);
  printf("Enter The 3st :");
  scanf("%d",&num3);
  if (num1 >= num2)
  {
    if (num1>=num3)
    {
      printf("the 1st number is the largest .");
    }
    else
    {
      printf("the 3st number is the largest .");
      /* code */
    }
  }else
  {
    if (num2>=num3)
    {
      printf("the 2st number is the largest .");
    }
    else
    {
      printf("the 3st number is the largest .");
      /* code */
    }
  }


}