#include <stdio.h>
#include <stdbool.h>  


bool isPrime(int n) 
{
    int sum=0;
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum+=i;
        }
    }
    if(n==sum)
    {
        return true;
    }
    else
    {
        return false;
    }
     
}

int main() 
{
    int a,b;

   
    printf("Nhap so thu nhat: ");
    scanf("%d", &a);
    printf("Nhap so thu hai: ");
    scanf("%d", &b);

  
    if (isPrime(a)) 
    {
        printf("%d la so hoan hao.\n", a);
    } 
    else 
    {
        printf("%d khong phai la so hoan hao.\n", a);
    }

   
    if (isPrime(b))
    {
        printf("%d la so hoan hao.\n", b);
    } 
    else 
    {
        printf("%d khong phai la so hoan hao.\n", b);
    }

    return 0;
}
