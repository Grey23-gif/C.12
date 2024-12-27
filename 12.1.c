
#include <stdio.h>
int sum(int c,int d)
{
    printf("Tong cua 2 so la: %d",c+d);
}

int main()
{
   int a,b;
   printf("Nhap a: ");
   scanf("%d",&a);
   printf("Nhap b: ");
   scanf("%d",&b);
   sum(a,b);
}
