#include <stdio.h>
int prime(int);
int prime(int n)
{
    int i;
    for (i = 2; i <= n - 1; i++)
        if (n % i == 0)
            break;

    if (i == n)
        printf("%d is prime no", n);
    else
        printf("%d is not a prime no", n);
    return n;
}
int main()
{
    int x;
    printf("Enter the number: ");
    scanf("%d", &x);
    prime(x);
    printf("\n");
    return x;
}
