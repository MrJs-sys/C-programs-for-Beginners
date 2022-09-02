#include <stdio.h>

int x,spawn;
int tempcon(int x);

int main(){
    printf("enter the temp on celcius: ");
    scanf("%d", &x);
    spawn = tempcon(x);
    printf("%d in kelvin is: %dK",x,spawn);
}

int tempcon(int x){
    return x + 273;
}