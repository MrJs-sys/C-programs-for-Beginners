#include <stdio.h>
#include <Math.h>
void pattern();
void heart();
int square(int len);
int rectangle(int len, int bre);
int cir(int radius);
int cylinder(int radius, int hei);
int para(int len, int bre);
const int pi = 3.14;
int main(){
    int len, bre, hei, radius, area, volume, n, j ,i;
    printf("Hello mate!");
    heart();
    printf("\n This is a calculator to find out the surface area of the common shapes and structures.\n\n\n Let's go and tell us about which shape you want to work with: \n1.Square\n2.Rectangle\n3.Circle\n4.cylinder\n5.parallelogram.\nEnter the corresponding number to the shape you want to work with: ");

    scanf("%d",&n);

    switch(n){
        case 1:
        {
            printf("enter the side(in cms): \n");
            scanf("%d", &len);
            area = square(len);
            printf("area of the square is: %d", area);
            break;          
        }

        case 2:
        {
            printf("enter the length of the rectangle: ");
            scanf("%d", &len);
            printf("enter the breadth of the rectangle: ");
            scanf("%d", &bre);
            area = rectangle(len,bre);
            printf("area of the rectangle is: %d", area);
            break;
        }

        case 3:
        {
            printf("enter the radius of the circle: ");
            scanf("%d", &radius);
            area = cir(radius);
            printf("Area of the circle is: %d", area);
            break;
        }

        case 4:
        {
            printf("enter the radius: ");
            scanf("%d", &radius);
            printf("enter the height: ");
            scanf("%d", &hei);
            area = cylinder(radius, hei);
            printf("Area of the cylinder is: %d", area);
            break;
        }

        case 5:
        {
            printf("enter the height of the parallelogram: ");
            scanf("%d", &len);
            printf("enter the base of the parallelogram: ");
            scanf("%d", &bre);
            area = para(len,bre);
            printf("the area of the parallelogram: %d", area);
            break;
        }
    }

}

void pattern(){
    int i, j, k;
    printf("\n\n");
    for(i=0; i<=5; i++){
        for(j=0; j<=i; j++){
            printf("*");
        }
        printf("\n");
    }
}

void heart(){
      int a, b, line = 12;
      printf("\n\n\n");
   for (a = line/2; a <= line; a = a+2) { //for the upper part of the heart
      for (b = 1; b < line-a; b = b+2) //create space before the first peak
         printf(" ");
      for (b = 1; b <= a; b++) //print the first peak
         printf("*");
      for (b = 1; b <= line-a; b++) //create space before the first peak
         printf(" ");
      for (b = 1; b <= a-1; b++) //print the second peak
         printf("*");
      printf("\n");
   }
   for (a = line; a >= 0; a--) { //the base of the heart is inverted triangle
      for (b = a; b < line; b++) //generate space before triangle
         printf(" ");
      for (b = 1; b <= ((a * 2) - 1); b++) //print the triangle
         printf("*");
      printf("\n");
   }
}

int square(int len){
    int area;
    area = len * len;
    return area;
}

int rectangle(int a, int b){
    return a * b;
}

int cir(int radius){
    return 2*pi*radius;
}

int cylinder(int radius, int hei){
   return (2*pi*radius*hei) + (2*pi*radius*radius);
}

int para(int len, int bre){
    return len*bre;
}