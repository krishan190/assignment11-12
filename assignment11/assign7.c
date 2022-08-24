#include<stdio.h>
void fib(int);
void fib(int n)
{
    int a=-1,b=1,i,c;
    for(i=1;i<=n;i++)
    {
      c=a+b;
      printf(" %d ",c);
      a=b;
      b=c;
    }
}
int main()
{
    int x;
    printf("Enter the value of n ");
    scanf("%d",&x);
    fib(x);
    printf("\n");
}