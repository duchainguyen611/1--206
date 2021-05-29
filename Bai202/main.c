#include <stdio.h>
#include <stdlib.h>

int kiemTraChuSoDau(int x){
    int themang=x;
    int chusodau;
    while(themang!=0){
        chusodau=themang%10;
        themang/=10;
    }
    if(chusodau%2==1){
        return 1;
    }else{
        return 0;;
    }
}

int tongDauLe(int n,int a[]){
    int S=0;
    for(int i=0;i<n;i++){
        if(kiemTraChuSoDau(a[i])==1){
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
    printf("\nTong la: %d",tongDauLe(n,a));
    return 0;
}
