#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    do{
    printf("\nNhap 1 so nguyen duong:");
    scanf("%d",&n);
    if(!(n>0)){
        printf("\n n phai la so nguyen duong");
    }}while(n<=0);
    int count=0;
    for(int i=1;i<=n;i++){
        if(n%i==0){
        count++;
        }
    }printf("Tong uoc so cua %d la: %d",n,count);
    return 0;
}
