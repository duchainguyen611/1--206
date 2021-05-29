#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("\nNhap n:");
    scanf("%d",&n);
    float a[n];
    for(int i=0;i<n;i++){
        printf("\nNhap so %d:",i+1);
        scanf("%f",&a[i]);
    }
    printf("\n");
    int max=0;
    for(int i=1;i<n;i++){
        if(a[max]<a[i]){
            max=i+1;
        }
    }
    printf(" %d",max);
    return 0;
}
