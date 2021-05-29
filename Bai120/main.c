#include <stdio.h>
#include <stdlib.h>

int ktraSoChinhPhuong(int n){
    if(n<1){
        return 0;
    }else if(n==1){
        return 1;
    }else{
        for(int i=2;i<=sqrt((float)n);i++){
            if(i*i==n){
                return 1;
            }
        }
    }
}

void lietke(int n){
    printf("\nSo chinh phuong nho hon %d la:",n);
    for(int i=1;i<n;i++){
        if(ktraSoChinhPhuong(i)==1){
            printf(" %d ",i);
        }
    }
}

int main()
{
    int n;
    printf("\nNhap n:");
    scanf("%d",&n);
    ktraSoChinhPhuong(n);
    lietke(n);
    return 0;
}
