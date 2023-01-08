#include <stdio.h>

int main(){
    int rows,cols;
    while(scanf("%d %d",&rows,&cols) != EOF){
        int data[rows][cols];
        for (int i=0; i<rows; i++){
            for (int j=0; j<cols; j++)
                scanf(" %d",&data[i][j]);
        }
        for (int i=0; i<cols;i++){
            for (int j=0; j<rows; j++){
                printf("%d",data[j][i]);
                if (j < rows-1) printf(" ");
            }
            printf("\n");
        }
    }
}