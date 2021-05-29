#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,themang;
    do{
        printf("\nNhap n:");
        scanf("%d",&n);
    }while(n<=0&&printf("\nLoi! n phai nguyen duong"));
    int S=1;
    themang=n;
    while(themang!=0){
        S=S*(themang%10);
        themang=themang/10;
    }
    printf("\nTich la: %d",S);
    getch();
    return 0;
}
