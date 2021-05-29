#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,themang,i;
    do{
        printf("\nNhap n:");
        scanf("%d",&n);
    }while(n<=0&&printf("\nLoi! n phai nguyen duong"));
    themang=n;
    do{
        i=themang%10;
    }while(themang/=10);
    printf("\nChu so dau tien la:%d",i);
    getch();
    return 0;
}
