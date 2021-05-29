#include <stdio.h>
#include <stdlib.h>

int soNguyenTo(int x){
    if(x<2)
        return 0;
    if(x>2){
        if(x%2==0)
            return 0;
        for(int i=3;i<x;i+=2)
            if(x%i==0)
                return 0;
    }
    return 1;
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
        if(soNguyenTo(a[i])==1){
            check=1;
            printf(" %d",i+1);
        }
    }
    if(check==0){
        printf("\nKhong co so nguyen to!");
    }
    return 0;
}
