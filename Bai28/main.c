#include <stdio.h>
#include <stdlib.h>

int main()
{
     int n;
    do{
        printf("\nNhap n(n nguyen duong):");
        scanf("%d",&n);
    }while(n<=0&&printf("\nLoi! n phai nguyen duong."));
    int S=0;
    for(int i=1;i<n;i++){
        if(n%i==0){
            S+=i;
        }
    }
    printf("Tong uoc so nho hon chinh no cua %d la:%d",n,S);
    return 0;
}
