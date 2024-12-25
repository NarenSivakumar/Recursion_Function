//Palindrome or not using recursion function
#include<stdio.h>

int palindrome(int,int,int);

int main()
{
  int num;
  printf("Enter the number\n");
  scanf("%d",&num);
  if(palindrome(num,num,0))
{
  printf("It's palindrome\n");
}
else
{
printf("It's not a palindrome\n");
}
}
int palindrome(int num,int original,int rev)
{
  if(num == 0){
    return rev == original; //comaparing the original value with reversed value
  }
else {
rev = rev *10 + (num%10);
return palindrome(num/10,original,rev); //recursion call
}
}
  
  
