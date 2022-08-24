#include<stdio.h>
void Octal(int);
void octal(int n)
{
    if(n>=1)
    {
        printf("%d",n%10);
        octal(n/10);
    }
}
int main()
{
    int n;
    printf("Enter any number :");
    scanf("%d",&n);
    printf("Reverse of a given number is: %d of ",n);
    octal(n);
    printf("\n");
}