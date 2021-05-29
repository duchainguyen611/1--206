#include <stdio.h>
#include <stdlib.h>

int kiemTraDang3k(int x){
    for(int i=0;;i++){
        if(x==pow(3,i)){
            return 1;
        }
    }
    return 0;
}

void lietKe(int n,int a[]){
    for(int i=0;i<n;i++){
        if(kiemTraDang3k(a[i])==1){
            printf(" %d",a[i]);
        }
    }
}

int main()
{
    int n;
    printf("\nNhap n:");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        printf("\nSo thu %d:",i+1);
        scanf("%d",&a[i]);
    }
    printf("\n");
    lietKe(n,a);
    getch();
    return 0;
}
