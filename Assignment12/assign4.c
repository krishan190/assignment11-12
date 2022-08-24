#include<stdio.h>
void oddReverse(int);
void oddReverse(int n)
{
    if(n==0)
    return ;
    printf(" %d ",2*n-1);
    oddReverse(n-1);
}
int main()
{
    int k;
    printf("Enter the value of N: ");
    scanf("%d",&k);
    oddReverse(k);
    printf("\n");
    return 0;
}