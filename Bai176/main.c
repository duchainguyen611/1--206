#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("\nNhap n:");
    scanf("%d",&n);
    float a[n];
    for(int i=0;i<n;i++){
        printf("So thu %d:",i+1);
        scanf("%f",&a[i]);
    }
    printf("\nCac so am:");
    for(int i=0;i<n;i++){
        if(a[i]<0){
            printf(" %g",a[i]);
        }
    }
    return 0;
}
