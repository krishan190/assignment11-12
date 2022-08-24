#include<stdio.h>
int LCM(int ,int);
int LCM(int x,int y)
{
   int l;
//    for(l=1;l<=x*y;l++)
   for(l=x>y?x:y;l<=x*y;l++)
   if(l%x==0 && l%y==0)
   break;
   return l;
   
}
int main()
{
   int s,a,b;
   printf("Enter two numbers: ");
   scanf("%d%d",&a,&b);
   s=LCM(a,b);
    printf("LCM is = %d",s);
    printf("\n");
    return 0;
}