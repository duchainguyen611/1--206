#include <stdio.h>
#include <stdlib.h>

void giaTriCucDai(int n,float a[]){
    for(int i=1;i<n-1;i++){
        if(a[i]>a[i-1]&&a[i]>a[i+1]){
            printf(" %g",a[i]);
        }
    }
}

int main()
{
    int n;
    printf("\nNhap n:");
    scanf("%d",&n);
    float a[n];
    for(int i=0;i<n;i++){
        printf("\nSo thu %d:",i+1);
        scanf("%f",&a[i]);
    }
    printf("\n");
    giaTriCucDai(n,a);
    return 0;
}
