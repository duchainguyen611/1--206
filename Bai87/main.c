#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0;
    int S=0;
    while(S<10000){
        i++;
        S+=i;
    }
    printf("\nSo n nho nhat de 1+2+...+n>10000 la:%d",i);
    printf("\nTong la:%d",S);
    return 0;
}
