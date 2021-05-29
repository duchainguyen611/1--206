#include <stdio.h>
#include <stdlib.h>

int kiemTraChuSoDau(int x){
    int chusodau;
    int themang=x;
    while(themang!=0){
        chusodau=themang%10;
        themang/=10;
    }
    if(chusodau%2==1){
        return 1;
    }else{
        return 0;
    }
}

void lietKe(int n,int a[]){
    int m=0;
    for(int i=0;i<n;i++){
        if(kiemTraChuSoDau(a[i])==1){
            printf(" %d",a[i]);
            m=1;
        }
    }
    if(m==0){
        printf("\nKhong co gia tri thoa man");
    }
}

int main()
{
    int n;
    printf("\nNhap n:");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){\
        printf("\nSo thu %d:",i+1);
        scanf("%d",&a[i]);
    }
    lietKe(n,a);
    return 0;
}
