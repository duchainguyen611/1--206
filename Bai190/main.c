#include <stdio.h>
#include <stdlib.h>

int soToanChuSoLe(int x){
    int themang=x;
    int S=1;
    while(themang!=0){
        int i=themang%10;
        S*=i;
        themang/=10;
    }
    if(S%2==1)
        return x;
    return 0;
}

void lietKe(int n,int a[]){
    for(int i=0;i<n;i++){
        if(soToanChuSoLe(a[i])==a[i]){
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
