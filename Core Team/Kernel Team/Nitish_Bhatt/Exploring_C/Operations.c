#include<stdio.h>

int main(){
    int a;
    int b;

    // Aithmatic operations
    printf("Enter a :");
    scanf("%d",&a);
    printf("Enter b :");
    scanf("%d",&b);

    printf("Sum of %d and %d is %d.\n",a,b,a+b);
    printf("Difference of %d and %d is %d.\n",a,b,a>b ? a-b:b-a);
    printf("Product of %d and %d is %d.\n",a,b,a*b);
    printf("Quotient of %d and %d is %d.\n",a,b,a/b);
    printf("Reamainder of %d and %d is %d.\n",a,b,a%b);


    // Relational Operators
    printf("Is %d equal to %d? %d\n",a,b,a == b);      
    printf("Is %d not equal to %d? %d\n",a,b,a != b);  
    printf("Is %d greater than %d? %d\n",a,b,a > b);
    
    
    // Logical Operators
    int age = 25;
    int has_license = 1;

    printf("Can You Drive: %d\n",(age>=18 ? 1:0) && has_license);
    printf("Can You Drive: %d\n",(age>=18) && !(has_license));

    return 0;
}