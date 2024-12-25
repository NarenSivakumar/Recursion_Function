//Fibonacci series using recursion
//Normal Function
#include<stdio.h>
void fibo(int n);
int main()
{
        int n;
        printf("Enter the n value\n");
        scanf("%d",n);
        fibo(n);
        printf("\n");
}
void fibo(int n)
{
        int x = 0, y =1, z;
        while(x<n)
{
        printf("%d",x);
z = x + y;
x = y;
y = z;
}
}

//Recursion Function:       
#include<stdio.h>
void fibo(int, int , int );

int main()
{
        int n;
        printf("Enter the n value\n");
        scanf("%d",&n);
        fibo(n,0,1);
        printf("\n");
}
fibo(int n, int x, int y)
{
        if(x<n){
        printf("%d",x);
        z = x + y;
        x = y;
        y = z;
        return fibo(n,x,z);
        }
}

       
        
        
