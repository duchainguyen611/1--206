#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n;
    do{
        printf("\nNhap n (n nguyen duong):");
        scanf("%d",&n);
    }while(n<1&&printf("Loi! n phai nguyen duong"));
    printf("\nSo %d co phai so doi xung khong?",n);
    int S=0;
    int themang=n;
    do{
        int i=themang%10;
        S*=10;
        S+=i;
    }while(themang/=10);
    if(S==n){
        printf("\nDung!");
    }else{
        printf("\nSai!");
    }
    getch();
    return 0;
}
