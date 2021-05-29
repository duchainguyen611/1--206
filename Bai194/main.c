#include <stdio.h>
#include <stdlib.h>

void lietKe(int n,int a[]){
    int min=abs(a[0]-a[1]);
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(abs(a[i]-a[j])<min){
                min=abs(a[i]-a[j]);
            }
        }
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(min==abs(a[i]-a[j])){
                printf(" (%d,%d)",a[i],a[j]);
            }
        }
    }
}

int main()
{
    int n;
    do{
        printf("\nNhap n:");
        scanf("%d",&n);
    }while(n<2&&printf("\nn>2!"));
    int a[n];
    for(int i=0;i<n;i++){
        printf("\nSo thu %d:",i+1);
        scanf("%d",&a[i]);
    }
    printf("\n");
    lietKe(n,a);
    return 0;
}
