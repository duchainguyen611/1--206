#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    do{
    printf("\nNhap n(n nguyen duong):");
    scanf("%d",&n);
    }while(n<=0&&printf("\nLoi! n phai nguyen duong."));
    int a=1;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
        printf("\n%d khong phai so nguyen to.",n);
        a=0;
        }
    }
    if(a==1){
    printf("\n%d la so nguyen to.",n);
}
    getch();
    return 0;
}
