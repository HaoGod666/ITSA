#include <stdio.h>

int main(){
    int mile;
    while(scanf("%d",&mile) != EOF){
        printf("%.1f\n", (double)mile*1.6);
    }
}