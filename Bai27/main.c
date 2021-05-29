#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    do{
        printf("\nNhap n(n nguyen duong):");
        scanf("%d",&n);
    }while(n<=0&&printf("\nLoi! n phai nguyen duong."));
    int count=0;
    for(int i=1;i<=n;i++){
        if(n%i==0&&i%2==0){
            count++;
        }
    }
    printf("\nSo luong uoc so chan cua so nguyen duong %d la: %d",n,count);
    return 0;
}
