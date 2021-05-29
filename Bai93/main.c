#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("\nNhap 1 so:");
    scanf("%d",&n);
    printf("\nKiem tra so %d la nguyen to hay khong?",n);
    int a=1;
    for(int i=2;i<n;i++){
        if(n%i==0){
            printf("\nSai!");
            a=0;
            break;
        }
    }
    if(a==1){
        printf("\nDung!");
    }
    return 0;
}
