#include<stdio.h>

int main(){
    // Program to Calculate the Area & Perimeter of a Rectangle.
    int side1;
    int side2;

    printf("Enter Side1 :");
    scanf("%d",&side1);

    printf("Enter Side2 :");
    scanf("%d",&side2);

    printf("The Area is %d and the perimeter is %d",side1*side2,2*(side1+side2));

    return 0;
}