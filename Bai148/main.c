#include<stdio.h>
#define max

int SoNguyenTo(int n)
{
   if(n<2)
        return 0;
   if(n>2)
        if(n%2==0)
            return 0;
        for(int i=3;i<=sqrt((float)n);i+=2)
            if(n%i==0)
                return 0;
   return 1;
}
int SoNguyenToCuoiCung(int a[],int n)
{
   for(int i=n-1; i>=0; i--)
      if(SoNguyenTo(a[i])==1)
         return a[i];
   return -1;
}

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

    printf("%d",SoNguyenToCuoiCung(a,n));
    return 0;
}
