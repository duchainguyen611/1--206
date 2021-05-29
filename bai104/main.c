#include <stdio.h>
#include <stdlib.h>

void nhapNgayThangNam(x,y,z){
    int count=0;
    if(z%4==0&&z%100||z%400==0){
        if(y==1){
            if(x>=1&&x<=31){
                printf("\nNgay thu %d trong nam.",count+x);
            }else{
                printf("\nKhong co ngay nay trong thang 1");
            }
        }else if(y==2){
            if(x>=1&&x<=29){
                printf("\nNgay thu %d trong nam.",count+x+31);
            }else{
                printf("\nKhong co ngay nay trong thang 2");
            }
        }else if(y==3){
            if(x>=1&&x<=31){
                printf("\nNgay thu %d trong nam.",count+x+60);
            }else{
                printf("\nKhong co ngay nay trong thang 3");
            }
        }else if(y==4){
            if(x>=1&&x<=30){
                printf("\nNgay thu %d trong nam.",count+x+91);
            }else{
                printf("\nKhong co ngay nay trong thang 4");
            }
        }else if(y==5){
            if(x>=1&&x<=31){
                printf("\nNgay thu %d trong nam.",count+x+121);
            }else{
                printf("\nKhong co ngay nay trong thang 5");
            }
        }else if(y==6){
            if(x>=1&&x<=30){
                printf("\nNgay thu %d trong nam.",count+x+152);
            }else{
                printf("\nKhong co ngay nay trong thang 6");
            }
        }else if(y==7){
            if(x>=1&&x<=31){
                printf("\nNgay thu %d trong nam.",count+x+182);
            }else{
                printf("\nKhong co ngay nay trong thang 7");
            }
        }else if(y==8){
            if(x>=1&&x<=31){
                printf("\nNgay thu %d trong nam.",count+x+213);
            }else{
                printf("\nKhong co ngay nay trong thang 8");
            }
        }else if(y==9){
            if(x>=1&&x<=30){
            printf("\nNgay thu %d trong nam.",count+x+244);
            }else{
                printf("\nKhong co ngay nay trong thang 9");
            }
        }else if(y==10){
            if(x>=1&&x<=31){
                printf("\nNgay thu %d trong nam.",count+x+274);
            }else{
                printf("\nKhong co ngay nay trong thang 10");
            }
        }else if(y==11){
            if(x>=1&&x<=30){
                printf("\nNgay thu %d trong nam.",count+x+305);
            }else{
                printf("\nKhong co ngay nay trong thang 11");
            }
        }else if(y==12){
            if(x>=1&&x<=30){
                printf("\nNgay thu %d trong nam.",count+x+335);
            }else{
                printf("\nKhong co ngay nay trong thang 12");
            }
        }else{
            printf("\nKhong co thang nay trong 1 nam");
        }
    }else{
       if(y==1){
            if(x>=1&&x<=31){
                printf("\nNgay thu %d trong nam.",count+x);
            }else{
                printf("\nKhong co ngay nay trong thang 1");
            }
        }else if(y==2){
            if(x>=1&&x<=28){
                printf("\nNgay thu %d trong nam.",count+x+31);
            }else{
                printf("\nKhong co ngay nay trong thang 2");
            }
        }else if(y==3){
            if(x>=1&&x<=31){
                printf("\nNgay thu %d trong nam.",count+x+59);
            }else{
                printf("\nKhong co ngay nay trong thang 3");
            }
        }else if(y==4){
            if(x>=1&&x<=30){
                printf("\nNgay thu %d trong nam.",count+x+90);
            }else{
                printf("\nKhong co ngay nay trong thang 4");
            }
        }else if(y==5){
            if(x>=1&&x<=31){
                printf("\nNgay thu %d trong nam.",count+x+120);
            }else{
                printf("\nKhong co ngay nay trong thang 5");
            }
        }else if(y==6){
            if(x>=1&&x<=30){
                printf("\nNgay thu %d trong nam.",count+x+151);
            }else{
                printf("\nKhong co ngay nay trong thang 6");
            }
        }else if(y==7){
            if(x>=1&&x<=31){
                printf("\nNgay thu %d trong nam.",count+x+181);
            }else{
                printf("\nKhong co ngay nay trong thang 7");
            }
        }else if(y==8){
            if(x>=1&&x<=31){
                printf("\nNgay thu %d trong nam.",count+x+212);
            }else{
                printf("\nKhong co ngay nay trong thang 8");
            }
        }else if(y==9){
            if(x>=1&&x<=30){
            printf("\nNgay thu %d trong nam.",count+x+243);
            }else{
                printf("\nKhong co ngay nay trong thang 9");
            }
        }else if(y==10){
            if(x>=1&&x<=31){
                printf("\nNgay thu %d trong nam.",count+x+273);
            }else{
                printf("\nKhong co ngay nay trong thang 10");
            }
        }else if(y==11){
            if(x>=1&&x<=30){
                printf("\nNgay thu %d trong nam.",count+x+304);
            }else{
                printf("\nKhong co ngay nay trong thang 11");
            }
        }else if(y==12){
            if(x>=1&&x<=30){
                printf("\nNgay thu %d trong nam.",count+x+334);
            }else{
                printf("\nKhong co ngay nay trong thang 12");
            }
        }else{
            printf("\nKhong co thang nay trong 1 nam");
        }
    }
}

int main()
{
    int dd,mm,yy;
    do{
    printf("\nNhap ngay:");scanf("%d",&dd);
    printf("\nNhap thang:");scanf("%d",&mm);
    printf("\nNhap nam:");scanf("%d",&yy);
    nhapNgayThangNam(dd,mm,yy);
    }while(1);
    return 0;
}
