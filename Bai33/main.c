#include <stdio.h>
#include <stdlib.h>

float canBacHai(int n){
    if(n==1){
        return sqrt(2);
    }else{
        return sqrt(2+canBacHai(n-1));
    }
}

int main()
{
    int n;
    do{
    printf("\nNhap n:");
    scanf("%d",&n);
        if(n<=0){
            printf("n phai nguyen duong");
        }
    }while(n<=0);
    printf("\nS(n) = CanBac2(2+CanBac2(2+...+CanBac2(2 + CanBac2(2)))) co %d dau can la:",n);
    printf(" %g",canBacHai(n));

    return 0;
}
