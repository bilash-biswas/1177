#include<stdio.h>
int main()
{
    int a[1000],b,i,j;
    scanf("%d",&b);
    for(i=0,j=0;i<1000;i++,j++)
    {
       printf("N[%d] = %d\n",i,j);
     if(j==(b-1))
     {
         j=-1;
     }
    }
    return 0;
}
