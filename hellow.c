#include <stdio.h>
int add(int x, int y)
{
    return x + y;
}
int pro(int x, int y)
{
    return x * y;
}
int sub(int x, int y)
{
    return x - y;
}
int div(int x, int y)
{
    return x / y;
}
int rem(int x, int y)
{
    return x % y;
}

int main()
{
    int x, y, p, c;
    printf("Hello world this is me, Calci!\n And I'm here to help you with all your calculating problems\n");
    printf("Which function you would like to perform\n");
    printf("Enter the corresponding number to perform the particular operation\n 1.Addition\n 2.Substraction\n 3.Multiplication\n 4.Division\n 5.Remainder\n\n\n");
    scanf("%d", &p);

    switch (p)
    {
    case 1:
        printf("let's perform some addition\n Enter the first number: ");
        scanf("%d", &x);
        printf("\nEnter the second number: ");
        scanf("%d", &y);
        c = add(x, y);
        printf("\nAnswer is %d\n", c);
        break;

    case 2:
        printf("let's perform some substraction\n Enter the first number: ");
        scanf("%d", &x);
        printf("\nEnter the second number: ");
        scanf("%d", &y);
        c = sub(x, y);
        printf("\nAnswer is %d\n", c);
        break;

    case 3:
        printf("let's perform some Multiplication\n Enter the first number: ");
        scanf("%d", &x);
        printf("\nEnter the second number: ");
        scanf("%d", &y);
        c = pro(x, y);
        printf("\nAnswer is %d\n", c);
        break;

    case 4:
        printf("let's perform some division\n Enter the first number: ");
        scanf("%d", &x);
        printf("\nEnter the second number: ");
        scanf("%d", &y);
        c = div(x, y);
        printf("\nAnswer is %d\n", c);
        break;

    case 5:
        printf("let's find the remainder\n Enter the first number: ");
        scanf("%d", &x);
        printf("\nEnter the second number: ");
        scanf("%d", &y);
        c = rem(x, y);
        printf("\nAnswer is %d\n", c);
        break;

    default:
        printf("\nThis is not for you bot\n");
        break;
    }

    printf("\nI hope this was helpful....... XOXO..........!");
    printf("\npress exit followed by enter to exit");
    int enter;
    scanf("%d", &enter);
    return 0;
}
