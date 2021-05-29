#include <stdio.h>
#include <stdlib.h>

void giaTriMax(int n,float a[]){
    float max=a[0];
    for(int i=1;i<n;i++){
        if(max<a[i]){
            max=a[i];
        }
    }
    for(int i=0;i<n;i++){
        if(a[i]==max){
            printf(" %d",i+1);
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
    giaTriMax(n,a);
    return 0;
}
