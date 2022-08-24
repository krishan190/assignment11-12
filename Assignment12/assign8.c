#include <stdio.h>
void DtoB(int);
void DtoB(int n)
{
    if (n == 1)
        printf("1");
    else
    {
        DtoB(n / 2);
        printf("%d", n % 2);
    }
}
int main()
{
    int k;
    printf("Enter the number for Binary conversion: ");
    scanf("%d", &k);
    DtoB(k);
    printf("\n");
    return 0;
}