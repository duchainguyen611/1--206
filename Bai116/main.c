#include <stdio.h>
#include <stdlib.h>
int n;
int S=0;

void nhapN(){
    do{
    printf("\nNhap n(n nguyen duong):");
    scanf("%d",&n);
    }while(n<1&&printf("\nBan nhap sai dieu kien!"));
}

void tong(){
    for(int i=1;i<=n;i++){
        S+=i;
    }
}

void xuatTong(){
    printf("\nTong S=%d",S);
}

int main()
{
    nhapN();
    tong();
    xuatTong();
    return 0;
}
