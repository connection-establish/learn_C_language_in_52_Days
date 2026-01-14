#include <stdio.h>

int main(){
    int row , col, num;
    row =1 ,num =1;
        while (row<=3){
            col = 1;              
            while (col <= 3) {
                printf(" _ ");
                col++;
            }
            printf("  _ ");
            printf("\n");
            col=1;
            while (col<=3)
            {
               printf("| %d ", num);
               num++;
               col++;
            }
            row++;
            printf("|\n");
        }
        printf(" -  -   -   -  \n");
    return 0;
}