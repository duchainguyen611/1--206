#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    do{
        printf("\nNhap n (n nguyen duong):");
        scanf("%d",&n);
    }while(n<1&&printf("\nLoi! n phai nguyen duong!"));
    int a=1;
    printf("\nSo %d co toan chu so chan khong?",n);
    while(n/=10){
        int i=n%10;
        if(i%2!=0){
            a=0;
            break;
        }
    }
    if(a==1){
        printf("\nDung!");
    }else{
        printf("\nSai!");
    }
    return 0;
}
