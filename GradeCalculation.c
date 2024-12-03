#include <stdio.h>
int main()
{
  int grade;
  printf("enter the grade :");
  scanf("%d", &grade);
  if (grade < 70)
  {
    printf("Fail");
  }
  else if (grade >= 70 && grade < 80)
  {
    printf("C");
  }
  else if (grade >= 80 && grade < 90)
  {
    printf("B");

  }
  else if (grade >= 90 && grade <= 100)
  {
    printf("A");

  }
}