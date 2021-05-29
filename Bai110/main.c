#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dem=0;
    printf("\nNhung truong hop tong 200000d tu 3 loai tien 1000d,2000d,5000d la:");
    for(int i=1;i<200;i++){
        for(int j=1;j<100;j++){
            for(int h=1;h<40;h++){
                if(i*1+j*2+h*5==200){
                    dem++;
                    printf("\nTH %d co %d to 1000, %d to 2000, %d to 5000.",dem,i,j,h);
                }
            }
        }
    }
    return 0;
}
