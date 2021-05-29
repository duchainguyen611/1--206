#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,y;
    do{
        printf("\nNhap thang:");scanf("%d",&m);
    }while(m<1&&m>12&&printf("\nLoi! Khong co thang nay! "));
    printf("\nNhap nam:");scanf("%d",&y);
    if(m==1||m==3||m==5||m==7||m==8||m==10||m==12){
        printf("\nThang %d nam %d co 31 ngay.",m,y);
    }if(m==4||m==6||m==9||m==11){
        printf("\nThang %d nam %d co 30 ngay.",m,y);
    }
    if(y%4==0&&y%100!=0||y%400==0){
        if(m==2){
            printf("\nThang %d nam %d co 29 ngay.",m,y);
        }
    }else{
        if(m==2){
            printf("\nThang %d nam %d co 28 ngay.",m,y);
        }
    }

    return 0;
}
