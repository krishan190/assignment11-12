#include<stdio.h>
int prime(int);
int prime(int l)
{
    int i,x;
    for(x=l+1; ;x++)
    {
        for(i=2;i<=x-1;i++)
        if(x%i==0)
        break;
        if(i==x)
        return x;
    }
}
int main()
{
    int n,x;
    printf("Enter any number: ");
    scanf("%d",&n);
    x=prime(n);
    printf("Next prime no is = %d",x);
    printf("\n");
    return x;
}