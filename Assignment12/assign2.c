#include<stdio.h>
void printNatural(int);
void printNatural(int n)
{
    if(n==0)
    return;
    printf(" %d ",n);
    printNatural(n-1);
}

int main()
{
    int n =10;
    printNatural(n);
    printf("\n");
}