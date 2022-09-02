#include <stdio.h>
int main(){
    int n = 321, reverse=0;
    printf("number before reverse: %d\n ",n);
    while(n != 0 ){
        reverse = reverse*10 + n%10;
        n = n/10;
    }
    printf("number after reverse: %d\n",reverse);
    return 0;
}