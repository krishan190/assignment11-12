#include<stdio.h>
void even(int);
void even(int n)
{
    if(n==0)
    return ;
    even(n-1);
    printf(" %d ",2*n);
}
int main()
{
    int k;
    printf("Enter the number :");
    scanf("%d",&k);
    even(k);
    printf("\n");
    return 0;
}