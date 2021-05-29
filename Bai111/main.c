#include <stdio.h>
#include <stdlib.h>

int main()
{
    int h1;
    printf("\nHinh 1:");
    printf("\nNhap chieu cao tam giac can dac:");
    scanf("%d",&h1);
    for(int i=0;i<=h1-1;i++){
        for(int j=0;j<2*h1-1;j++){
            if(j<=h1+i-1&&j>=h1-i-1){
                printf(" * ");
            }else{
                printf("   ");
            }
        }
        printf("\n");

    }
    printf("\n\nHinh 2:");
    int h2;
    printf("\nNhao chieu cao tam giac can rong:");
    scanf("%d",&h2);
    for(int i=0;i<h2-1;i++){
        for(int j=0;j<2*h2-1;j++){
            if(j==h2-i-1||j==h2+i-1){
                printf(" * ");
            }else{
                printf("   ");
            }
        }printf("\n");
    }

    for(int i=0;i<2*h2-1;i++){
        printf(" * ");
    }

    printf("\n\nHinh 3:");
    int h3;
    printf("\nNhap chieu cao tam giac vuong can dac:");
    scanf("%d",&h3);
    for(int i=0;i<h3;i++){
        for(int j=0;j<h3;j++){
            if(i>=j){
                printf(" * ");
            }else{
                printf("   ");
            }
        }printf("\n");
    }

    printf("\n\nHinh 4:");
    int h4;
    printf("\nNhap chieu cao tam giac vuong can rong:");
    scanf("%d",&h4);
    for(int i=0;i<h4-1;i++){
        for(int j=0;j<h4-1;j++){
            if(j==i||j==0){
                printf(" * ");
            }else{
                printf("   ");
            }
        }printf("\n");
    }
    for(int i=0;i<h4;i++){
        printf(" * ");
    }



    return 0;
}
