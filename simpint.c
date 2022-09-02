#include <stdio.h>
int pri,rate, year,res;
int simp(int pri,int rate, int year);

int main(){
    printf("enter the data: ");
    scanf("%d", &pri);
    printf("enter the data: ");
    scanf("%d", &rate);
    printf("enter the data: ");
    scanf("%d", &year);

    res = simp(pri,rate,year);
    printf("%d is the amount you will lend", res);
}

int simp(int pri,int rate, int year){
    return (pri*rate*year)/100;
}