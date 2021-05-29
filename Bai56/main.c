#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    do{
        printf("\nNhap n (n nguyen duong):");
        scanf("%d",&n);
    }while(n<1&&printf("\nLoi!n phai nguyen duong!"));
    int a=1;
    printf("\nSo %d gom toan cac chu so le hay khong ?\n", n);
    do{
        int i=n%10;
        if(i%2==0){
            printf("\nSai!");
            a=0;
            break;
        }
    }while(n/=10);
    if(a==1){
        printf("\nDung!");
    }
    return 0;
}
