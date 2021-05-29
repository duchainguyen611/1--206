#include <stdio.h>
#include <stdlib.h>

float tongCucDai(int n,float a[]){
    float S=0;
    for(int i=0;i<n;i++){
        if(a[i]>a[i-1]&&a[i]>a[i+1]){
            S+=a[i];
        }
    }
    return S;
}

int main()
{
    int n;
    printf("\nNhap n:");
    scanf("%d",&n);
    float a[n];
    for(int i=0;i<n;i++){
        printf("a[%d]:",i+1);
        scanf("%f",&a[i]);
    }
    printf("\nTong theo de bai: %g",tongCucDai(n,a));
    return 0;
}
