#include <stdio.h>
int main (){
  int number ;
  printf("enter the number :");
  scanf("%d",&number);
  for(int i = 0 ; i <= 10;i++){
    printf("%d x %d = %d \n",number,i,number * i);
  }
  return 0 ;
}