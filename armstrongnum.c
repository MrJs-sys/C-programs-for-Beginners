//number that have n digits and where the square of the nth term of each number if added then it is the original number 
/*
For eg:

153

here
number of digits = nth term = 3;

so 

1^3 + 5^3 + 3^3

1x1x1 + 5x5x5 + 3x3x3 = 1+125+27 = 153(which is n the original number)
 */

//code 
#include <stdio.h>
#include <math.h>

int main(){
        int number,n,number1, temp, i=0, result=0;
        printf("enter the number: ");
        scanf("%d", &number);

        number1 = number;
        temp = number;

        printf(" \nnumber %d\n", number);
        printf(" number1 %d\n", number1);
        printf(" Temp %d\n", temp);

        while(number != 0){
            number = number/10;
            i++;
              printf(" number in loop [%d] %d\n",i, number);
        }
printf("\nnumber after looping is %d: \n\n", number);
        while(number1 != 0){
            n = number1%10;
            printf(" n,i,number in loop %d  [%d] %d\n" ,n,i, number1);
            result = result+pow(n,i);
            printf(" i, result, n in loop [%d] %d , %d\n",i, result, n);
            number1 = number1/10;
            printf(" number1 in loop [%d] %d\n",i, number1);
        }

        if(temp == result){
            printf("it is an armstrong number");
        }
        else{
            printf("no it is not an armstrong number");
        }
}