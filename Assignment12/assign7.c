#include<stdio.h>
void squareNatural(int);
void squareNatural(int n)
{
    if(n==0)
    return ;
    squareNatural(n-1);
    printf(" %d ",n*n);
}
int main()
{
    int k;
    printf("Enter the number: ");
    scanf("%d",&k);
    squareNatural(k);
    printf("\n");
    return 0;
}