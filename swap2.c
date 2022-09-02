#include <stdio.h>

void swap(int *a, int *b);

int main(){
    int x,y, swap1;
    printf("x = ");
    scanf("%d", &x);
    printf("\ny = ");
    scanf("%d", &y);
    printf("\nvalue of x and y are x = %d,y = %d before swap", x,y);
    swap(&x,&y);
    printf("\nvalue of x and y are x = %d,y = %d after swap", x,y);
     return 0;
}

void swap(int *a, int *b) {
    int temp;
    temp = *a;
    *a= *b;
    *b = temp;
}