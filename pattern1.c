#include <stdio.h>

int main(){
    int a,i,j;
    printf("enter the number of lines: ");
    scanf("%d", &a);

    for(i=0; i<a; i++){
        //print the column
        for(j=0; j<i+1; j++){
            //for rows 
            //everytime i runs j will also run for the given conditions
            printf("*");
        }
        printf("\n");
    }
}