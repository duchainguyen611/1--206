#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m;
    do{
    printf("\nNhap thang cua 1 nam bat ki:");
    scanf("%d",&m);
    }while((m<1&&m>12)&&printf("\nLoi!Khong co thang nay."));
    if(m>=1&&m<=3){
        printf("\nThang %d la quy 1",m);
    }else if(m>=4&&m<=6){
        printf("\nThang %d la quy 2",m);
    }else if(m>=7&&m<=9){
        printf("\nThang %d la quy 3",m);
    }else{
        printf("\nThang %d la quy 4",m);
    }
    return 0;
}
