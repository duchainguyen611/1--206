#include <stdio.h>
#include <stdlib.h>

float giaTriDuongNhoNhat(int n,float a[]){
    float min=a[0];
    for(int i=1;i<n;i++){
        if(a[i]<min){
            min=a[i];
        }
    }
    if(min>0)
        return min;
    else
        return 1;
}

void timViTri(int n,float a[]){
    printf("\n");
    float minpositive=giaTriDuongNhoNhat(n,a);
    for(int i=0;i<n;i++){
        if(a[i]==minpositive){
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
    timViTri(n,a);
    return 0;
}
