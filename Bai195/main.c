#include <stdio.h>
#include <stdlib.h>

void lietKe(int n,float a[]){
    for(int i=0;i<n-2;i++){
        for(int j=i+1;j<n-1;j++){
            for(int k=i+2;k<n;k++){
                if(a[i]==a[j]+a[k]||a[k]==a[i]+a[j]||a[j]==a[i]+a[k]){
                    printf(" (%g,%g,%g)",a[i],a[j],a[k]);
                }
            }
        }
    }
}

int main()
{
    int n;
    printf("\nNhap n:");
    scanf("%d",&n);
    float a[n];
    for(int i=0;i<n;i++){\
        printf("\nSo thu %d:",i+1);
        scanf("%f",&a[i]);
    }
    lietKe(n,a);
    return 0;
}
