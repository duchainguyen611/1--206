#include <stdio.h>
#include <stdlib.h>

void nhapNgayThangNam(int x,int y,int z){
    if(y>=1&&y<=12){
    if(y==5||y==7||y==10||y==12){
        if(x>=2&&x<=31){
            printf("%d/%d/%d",x-1,y,z);
        }else if(x==1){
            printf("30/%d/%d",y-1,z);
        }else{
            printf("Thang %d khong co ngay %d",y,x);
        }
    }else if(y==4||y==6||y==9||y==11){
        if(x>=2&&x<=30){
            printf("%d/%d/%d",x-1,y,z);
        }else if(x==1){
            printf("31/%d/%d",y-1,z);
        }else{
            printf("Thang %d khong co ngay %d",y,x);
        }
    }else if(y==8){
        if(x>=2&&x<=31){
            printf("%d/%d/%d",x-1,y,z);
        }else if(x==1){
            printf("31/%d/%d",y-1,z);
        }else{
            printf("Thang %d khong co ngay %d",y,x);
        }
    }else if(y==1){
        if(x>=2&&x<=31){
            printf("%d/%d/%d",x-1,y,z);
        }else if(x==1){
            printf("31/12/%d",z-1);
        }else{
            printf("Thang %d khong co ngay %d",y,x);
        }
    }else{
        if((z%4==0&&z%100!=0)||(z%400==0)){
            if(x>=2&&x<=29){
            printf("%d/%d/%d",x-1,y,z);
        }else if(x==1){
            printf("31/%d/%d",y-1,z);
        }else{
            printf("Thang %d khong co ngay %d",y,x);
             }
        }else{
        if(x>=2&&x<=28){
            printf("%d/%d/%d",x-1,y,z);
        }else if(x==1){
            printf("31/%d/%d",y-1,z);
        }else{
            printf("Thang %d khong co ngay %d",y,x);
             }
        }
    }
    } else{
        printf("Khong co thang %d",y);
    }
}

int main()
{
    int dd,mm,yy;
    printf("Nhap ngay:");scanf("%d",&dd);
    printf("Nhap thang:");scanf("%d",&mm);
    printf("Nhap nam:");scanf("%d",&yy);
    printf("Ngay truoc do la:");
    nhapNgayThangNam(dd,mm,yy);
    return 0;
}
