#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("In tat ca cac so nguyen duong le <100 tru 5,7,93:");
    for(int i=1;i<100;i++){
        if(i%2!=0&&i!=5&&i!=7&&i!=93){
            printf("%3d",i);
        }
    }
    return 0;
}
