#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    do{
    printf("\nNhap n(n nguyen duong):");
    scanf("%d",&n);
    }while(n<=0&&printf("\nLoi! n phai nguyen duong."));
    int a=0;
    for(int i=2;i<=sqrt(n);i++){
        if(i*i==n){
            printf("%d la so chinh phuong",n);
            a=1;
        }
    }
    if(a==0){
        printf("%d khong la so chinh phuong",n);
    }
    return 0;
}
