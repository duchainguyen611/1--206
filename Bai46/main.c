#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,cacchuso,themang;
    do{
        printf("\nNhap n:");
        scanf("%d",&n);
    }while(n<=0&&printf("\nLoi! n phai nguyen duong"));
    cacchuso=0;
    themang=n;
    if(n==0){
        cacchuso=1;
    }
    int count=0;
    while(themang!=0){
        cacchuso+=1;
        themang=themang/10;
        if(cacchuso%2!=0){
            count++;
        }
    }
    printf("So luong chu so le la:%d",count);
    return 0;
}
