#include<stdio.h>
void Octal(int);
void octal(int n)
{
    if(n>=1)
    {
        octal(n/8);
        printf("%d",n%8);
    }
}
int main()
{
    int n;
    printf("Enter any Decimal number :");
    scanf("%d",&n);
    printf("convert decimal to octal number: %d is ",n);
    octal(n);
    printf("\n");
}