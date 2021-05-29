#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    do{
        printf("\nNhap n (n nguyen duong):");
        scanf("%d",&n);
    }while(n<1&&printf("Loi! n phai nguyen duong"));
    int themang=n;
    int a=1;
    printf("\nSo %d tang dan tu trai sang phai khong?",n);
    do{
        int i=themang%10;
        int j=(themang/10)%10;
        if(j>i){
            a=0;
        }else if(i==j){
            a=0;
        }
    }while(themang/=10);
    if(a==0){
        printf("\nSai!");
    }else{
        printf("\nDung!");
    }
    getch();
    return 0;
}
