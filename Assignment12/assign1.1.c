#include <stdio.h>
int sum(int);
int main()
{
    int k, n;
    printf("Enter the number want to show sum of natural number:");
    scanf("%d", &n);
    printf("%d", sum(n));
    printf("\n");
}
int sum(int n)
{
    if (n == 1)
        return 1;
    return n + sum(n - 1);
}
