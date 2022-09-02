#include <stdio.h>
int main(){
    int a = 3092, i = 0;

    while(a!=0){
        int x = a%10;
        printf("%d\n", a);
        printf("%d\n", x);

        a = a/10;
         printf("%d\n\n", a);

    }
}