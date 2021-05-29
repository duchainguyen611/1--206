#include <stdio.h>
#include <stdlib.h>

void lietKeSoAm(int n,float a[]){
    for(int i=0;i<n;i++){
        if(a[i]<0){
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
    for(int i=0;i<n;i++){\
        printf("\nSo thu %d:",i+1);
        scanf("%f",&a[i]);
    }
    lietKeSoAm(n,a);
    return 0;
}
