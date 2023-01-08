#include <stdio.h>

int main(){
    // season of the month
    int num;
    while(scanf("%d",&num) != EOF){
        if(num>=3 && num<=5){
            printf("Spring\n");
        }else if(num>=6 && num<=8){
            printf("Summer\n");
        }else if(num>=9 && num<=11){
            printf("Autumn\n");
        }else{
            printf("Winter\n");
        }
    }
}