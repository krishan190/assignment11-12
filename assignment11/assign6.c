#include<stdio.h>
int prime(int,int);
int prime(int l,int u)
{
    int i,x;
    printf("between prime no is: ");
    for(x=l+1;x<=u-1;x++)
    {
        for(i=2;i<=x-1;i++)
        if(x%i==0)
        break;
        if(i==x)
        printf(" %d ",x);
    }
        printf("\n");
        return x;
}
int main()
{
    int a,b,x;
    printf("Enter two number: ");
    scanf("%d%d",&a,&b);
    x=prime(a,b);
    return x;
}