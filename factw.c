#include <stdio.h>

int factorial(int x){
    if(x==0||x==1){
        return 1;
    }
    else{
        return x*factorial(x-1);
    }
}

int main(){
    int x,n;
    printf("enter the num: ");
    scanf("%d", &x);
    n = factorial(x);
    printf("%d", n);
    return 0;
}