#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("In tat ca cac so nguyen duong le <100");
    for(int i=1;i<100;i++){
        if(i%2!=0){
            printf("%3d",i);
        }
    }
    return 0;
}
