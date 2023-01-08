#include <stdio.h>

int main(){
    int num;

    while(scanf("%d",&num) != EOF){
        num /= 3;
        printf("%d\n", 3*(num*(num+1))/2);
    }
}
