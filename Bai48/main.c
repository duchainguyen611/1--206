#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,themang;
    do{
        printf("\nNhap n:");
        scanf("%d",&n);
    }while(n<=0&&printf("\nLoi! n phai nguyen duong"));
    themang=n;
    int S=1;
    while(themang!=0){
        themang=themang/10;
        if(themang%2!=0){
            S*=(themang%10);
        }
    }
    printf("Tich cac chu so le la:%d",S);
    return 0;
}
