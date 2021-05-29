#include <stdio.h>
#include <stdlib.h>

int chuSoHangChucBang5(int x){
    int themang=x/10;
    int sohangchuc;
    while(themang!=0){
        sohangchuc=themang%10;
        themang/=10;
    }
    if(sohangchuc==5){
        return 1;
    }else{
        return 0;
    }
}

int tongChuc(int n,int a[]){
    int S=0;
    for(int i=0;i<n;i++){
        if(chuSoHangChucBang5(a[i])==1){
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
    int a[n];
    for(int i=0;i<n;i++){
        printf("a[%d]:",i+1);
        scanf("%d",&a[i]);
    }
    printf("\nTong theo de bai: %d",tongChuc(n,a));
    return 0;
}
