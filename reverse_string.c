//reverse the string using recursion function

#include<stdio.h>
#include<string.h>

void reverse(char[],int,int);
int main()
{
  char str[100];
  printf("Enter the string : %s\n",str);
  scanf("%s",str);
  int length = strlen(str);
  reverse(str,0,length-1);
  printf("Reversed string is: %s\n",str);
}
void reverse(char str[], int start, int end)
{
  if(start >= end)
{
  return;
}
else
{
  char temp = str[start];
  str[start] = str[end];
  str[end] = temp;
  return reverse(str,start +1 , end-1);
}
}
