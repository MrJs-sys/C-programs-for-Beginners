//Total number of digits in number.

#include <stdio.h>
int main()
{
    int loop_counter = 0;
    int a = 7896;

    while(a!=0){
        a = a/10;
        loop_counter++;
    }
    printf("%d", loop_counter);
}