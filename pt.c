#include<stdio.h>
int main(){
    int i = 34;
    int*j = &i;

    printf("the value of i is %d\n", i);
    printf("the value of i is %d\n", *j);
    printf("the value of i is %u\n", j);
    printf("the value of i is %u\n", &i);
    printf("the value of i is %u\n", &j);
    printf("the value of i is %u\n", *(&j));

    for(int i = 1; i > 0; i++){
        printf("%d\n", i);
    }

    return 0;
}