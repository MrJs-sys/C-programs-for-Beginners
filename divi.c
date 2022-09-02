#include <stdio.h>

int divi(int x, int y);

int main(){
    int x,y,res;
    printf("enter the number: ");
    scanf("%d", &x);
    printf("divisibility check with: ");
    scanf("%d", &y);

    res = divi(x,y);
    printf("%d",res);
}

int divi(int x, int y){
    int res;

    if(x%y==0){
        return 1;
    }
    else{
        return 0;
    }
    
}