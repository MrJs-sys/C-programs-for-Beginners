#include <stdio.h>

int add(int a, int b);
int sub(int a, int b);
int pro(int a, int b);
int div(int a, int b);
int rem(int a, int b);

int main(){
    int x, y, n, res;
    printf("Smart calci\n Remember this calculator never return a negative value on substraction\n");
    printf("What operation you want to perform:\n 1.ADD\n 2.SUB\n 3.MULTIPLY\n 4.DIVIDE\n 5.FIND REMAINDER\n enter the corresponding number of the operator\n");
    scanf("%d" &n);
    printf("enter the first num: ");
    scanf("%d",&x);
    printf("enter the second num: ");
    scanf("%d",&y);

    switch(n){
        case 1:
        {
            res = add(x,y);
            printf("addition of %d and %d is %d", x,y,res);
            break;
        }
        case 2:
        {
            res = sub(x,y);
            printf("difference of %d and %d is %d", x,y,res);
            break;
        }
        case 3:
        {
            res = pro(x,y);
            printf("product of %d and %d is %d", x,y,res);
            break;
        }
        case 4:
        {
            res = div(x,y);
            printf("division of %d and %d is %d", x,y,res);
            break;
        }
        case 5:
        {
            res = rem(x,y);
            printf("remainder of %d and %d is %d", x,y,res);
            break;
        }
        return 0;
    }

    }

    int add(int a, int b){
        int res;
        res = a + b;
        return res;
    };
    int sub(int a, int b){
        int res;
        res = a - b;
        return res;
    };
    int pro(int a, int b){
        int res;
        res = a * b;
        return res;
    };
    int div(int a, int b){
        int res;
        res = a / b;
        return res;
    };
    int rem(int a, int b){
        int res;
        res = a % b;
        return res;
    };
