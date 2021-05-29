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
    printf("Uoc so le cua n la:");
    for(int i=1;i<=n;i++){
        if(n%i==0&&i%2!=0){
            printf("%2d",i);
        }
    }
    return 0;
}
