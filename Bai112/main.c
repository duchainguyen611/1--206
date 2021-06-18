#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\nHinh chu nhat dac:");
    int x,y;
    printf("\nNhap chieu dai:");
    scanf("%d",&x);
    printf("\nNhap chieu rong:");
    scanf("%d",&y);
    for(int i=0;i<y;i++){
        for(int j=0;j<x;j++){
            if(j+i<x+i){
                printf(" * ");
            }else{
                printf("   ");
            }
        }printf("\n");
    }

    printf("\n\nHinh chu nhat rong:");
    int x1,y1;
    printf("\nNhap chieu dai:");
    scanf("%d",&x1);
    printf("\nNhap chieu rong:");
    scanf("%d",&y1);
    printf("\n");
    for(int i=0;i<y1;i++){
        for(int j=0;j<x1;j++){
            if(i==0||i==y1-1||j==0||j==x1-1){
                printf(" * ");
            }else{
                printf("   ");
            }
        }printf("\n");
    }
    return 0;
}
