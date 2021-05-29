#include <stdio.h>
#include <stdlib.h>

void tongGiaTriLonHonTriTuyetDoiDungSau(int n,float a[]){
    float S=0;
    for(int i=0;i<n-1;i++){
        if(abs(a[i])>abs(a[i+1])){
            S+=a[i];
        }
    }
    printf("\nTong theo de bai: %g",S);
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
    tongGiaTriLonHonTriTuyetDoiDungSau(n,a);
    return 0;
}
