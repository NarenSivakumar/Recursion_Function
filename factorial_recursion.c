//Factorial Number using recursion function
//Normal Function:
#include<stdio.h>
int fact(int n);

int main()
{
  int n;
  printf("Enter the number");
  scanf("%d",&n);
  int result = fact(n);
  printf("result is %d:\n",result);
}
int fact(int n)
{
  int f = 1;
  while(n != 0)
{
 f = f *n;
n = n-1;
}
return f;
}


//recursion function:
#include<stdio.h>

int fact(int, int);

int main()
{
  int n;
  printf("Enter the number");
  scanf("%d",&n);
  int result  = fact(n,1);
printf("%d",result);
}
int fact(int n,int f)
{
  if(n != 0)
{
  f = f*n;
  n = n - 1;
  return fact(n,f);
}
else 
return f;
}
