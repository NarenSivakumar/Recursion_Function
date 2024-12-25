//sum of digits using recursion
#include<stdio.h>

int sumofdigits(int);
int main()
{
  int num ;
  printf("Enter the number");
  scanf("%d",&num);
  int result = sumofdigits(num);
printf("Result is : %d\n",result );
}
int sumofdigits(int num)
{
  if(num ==0)
{
  return 0;
}
else
    return (num%10) + sumofdigits(num /10);
}
