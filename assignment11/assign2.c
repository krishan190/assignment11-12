#include<stdio.h>
int HCF(int ,int);
int HCF(int a,int b)
{
    int H;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    for(H=a<b?a:b;H>=1;H--)
        if(a%H==0 && b%H==0)
        break;
    return H;
}
int main()
{
    int s,x,y;
    s=HCF(x,y);
    printf("HCF is = %d",s);
    printf("\n");
    return s;
}