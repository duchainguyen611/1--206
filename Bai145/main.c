#include<stdio.h>
#define max

int main(){
    int n;
    printf("So phan tu:");
    scanf("%d",&n);
    int a[n];
    int i;
    for(i=0;i<n;i++){
        printf("a[%d]=",i+1);
        scanf("%d",&a[i]);
    }

    printf("%d",SoHoanThienDauTien(a,n));
    return 0;
}
int SoHoanThien(int n)
{
   int tong=0;
   for (int i=1 ; i<n; i++)
       if(n%i==0)
          tong = tong + i;
   if (tong == n)
      return 1;
   return 0;
}
int SoHoanThienDauTien(int a[],int n)
{
   for(int i=0; i<n; i++)
      if(SoHoanThien(a[i])==1)
         return a[i];
   return -1;
}
