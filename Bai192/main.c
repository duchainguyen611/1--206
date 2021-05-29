#include <stdio.h>
#include <stdlib.h>

int chuSoDauTien(int x){
    int themang=x;
    int chusodau;
    while(themang!=0){
        chusodau=themang%10;
        themang/=10;
    }
    return chusodau;
}

void lietKe(int n,int a[]){
    for(int i=0;i<n;i++){
        if(chuSoDauTien(a[i])%2==0){
            printf(" %d",a[i]);
        }
    }
}

int main()
{
    int n;
    printf("\nNhap n:");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        printf("\nSo thu %d:",i+1);
        scanf("%d",&a[i]);
    }
    printf("\n");
    lietKe(n,a);
    return 0;
}
