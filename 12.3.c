
#include <stdio.h>
int giaithua(int a)
{
    int giaithua=1;
    for(int i=1;i<=a;i++)
    {
        giaithua*=i;
    }
    printf("Giai thua cua %d la: %d",a,giaithua);
}

int main()
{
   int n;
   printf("Nhap n: ");
   scanf("%d",&n);
   giaithua(n);
   return 0;
}
