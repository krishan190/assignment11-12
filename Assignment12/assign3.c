#include <stdio.h>
void odd(int);
void odd(int n)
{
    if (n == 0)
        return;
    odd(n - 1);
    printf(" %d ", 2 * n - 1);
}
int main()
{
    int k;
    printf("Enter the numbers : ");
    scanf("%d", &k);
    odd(k);
    printf("\n");
    return 0;
}