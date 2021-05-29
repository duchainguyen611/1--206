#include <stdio.h>
#include <stdlib.h>

int soChinhPhuong(int x){
    for(int i=1;i<=sqrt((float)x);i++){
        if(i*i==x){
            return 1;
        }
    }
    return 0;
}

int main()
{
    int n;
    printf("\nNhap n:");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        printf("\nNhap so %d:",i+1);
        scanf("%d",&a[i]);
    }
    printf("\n");
    int check=0;
    for(int i=0;i<n;i++){
        if(soChinhPhuong(a[i])==1){
            printf(" %d",i+1);
            check=1;
        }
    }
    if(check==0){
        printf("\nKhong co so chinh phuong");
    }
    return 0;
}
