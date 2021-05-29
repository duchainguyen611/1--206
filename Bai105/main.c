#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    do{
    printf("\nNhap so co 2 chu so:");
    scanf("%d",&n);
    }while(n<10&&n>99&&printf("\nBan nhap sai!"));
    int a=n%10;
    int b=(n/10)%10;
    if(n==10){
        printf("muoi");
    }else{
    switch(b){
    case 1:printf("muoi");break;
    case 2:printf("hai");break;
    case 3:printf("ba");break;
    case 4:printf("bon");break;
    case 5:printf("nam");break;
    case 6:printf("sau");break;
    case 7:printf("bay");break;
    case 8:printf("tam");break;
    case 9:printf("chin");break;
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
