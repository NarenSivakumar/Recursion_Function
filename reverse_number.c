//Reverse the given Integer using recursion function
#include<stdio.h>

int reverse(int, int);
int main()
{
int num;
printf("Enter the number\n");
scanf("%d",&num);
int result = reverse(num,0);
printf("Reversed integer is:%d\n",result);
}
int reverse(int num, int rev)
{
  if(num ==0) 
{
return rev;
}
else 
{
    rev = rev * 10 + (num %10);
    return reverse(num/10,rev);
}
}




