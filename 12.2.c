
#include <stdio.h>
void PrintfArr(int a,int arr[])
{
    for(int i=0;i<a;i++)
    {
    printf("\nPhan tu thu %d : %d  ",i+1,arr[i]);
    }
}

int main()
{
   int arr[10]={1,2,3,4,5,6,7,8,9,10};
   int n=sizeof(arr)/sizeof(arr[0]);
   PrintfArr(n,arr);
   return 0;
}
