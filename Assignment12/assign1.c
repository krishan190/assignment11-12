#include<stdio.h>
void printNatural(int);
void printNatural(int n)
{
   if(n==0)
   return;
   printNatural(n-1);
   printf(" %d ",n);

   
}
int main()
{
    int n = 10;
    printNatural(n);
    printf("\n");
}