#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    do{
    printf("Nhap so n:");
    scanf("%d",&n);
        if(!(n>0)){
            printf("So n phai nguyen duong");
        }
    }while(!(n>0));
    int S=0;
    for(int i=1;i<=n;i++){
        if(n%i==0&&i%2==0){
            S+=i;
        }
    }printf("Tong uoc so chan cua %d la: %d",n,S);
    return 0;
}
