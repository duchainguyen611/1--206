#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    do{
    printf("\nNhap so co 3 chu so:");
    scanf("%d",&n);
    }while(n<100&&n>999&&printf("\nBan nhap sai!"));
    int a=n%10;
    int b=(n/10)%10;
    int c=(n/100)%10;
    if(n==100){
        printf("mot tram");
    }else{
    switch(c){
    case 1:printf("mot tram");break;
    case 2:printf("hai tram");break;
    case 3:printf("ba tram");break;
    case 4:printf("bon tram");break;
    case 5:printf("nam tram");break;
    case 6:printf("sau tram");break;
    case 7:printf("bay tram");break;
    case 8:printf("tam tram");break;
    case 9:printf("chin tram");break;
    }
    switch(b){
    case 1:printf(" muoi");break;
    case 2:printf(" hai");break;
    case 3:printf(" ba");break;
    case 4:printf(" bon");break;
    case 5:printf(" nam");break;
    case 6:printf(" sau");break;
    case 7:printf(" bay");break;
    case 8:printf(" tam");break;
    case 9:printf(" chin");break;
    default:printf(" linh");break;
    }
    switch(a){
    case 1:printf(" mot");break;
    case 2:printf(" hai");break;
    case 3:printf(" ba");break;
    case 4:printf(" bon");break;
    case 5:printf(" nam");break;
    case 6:printf(" sau");break;
    case 7:printf(" bay");break;
    case 8:printf(" tam");break;
    case 9:printf(" chin");break;
    default:printf(" muoi");break;
    }
    }
    return 0;
}
