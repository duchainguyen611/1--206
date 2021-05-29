#include <stdio.h>
#include <stdlib.h>

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
    int max=a[0];
    for(int i=1;i<n;i++){
        if(a[i]%2==0){
            if(max<a[i]){
                max=a[i];
            }
        }
    }
    for(int i=0;i<n;i++){
        if(max==a[i]){
            printf(" %d",i+1);
        }
    }
    return 0;
}
