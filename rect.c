#include <stdio.h>

int l,b,c,res;

int rect(int l, int b);

 int main(){
    printf("enter the length of the rectangle: ");
    scanf("%d", &l);
    printf("enter the breadth of the rectangle: ");
    scanf("%d", &b);
    res = rect(l,b);
    printf("area of the rectangle is: %d",res);
 }

 int rect(int l, int b){
    c = l*b;
    return c;
 }