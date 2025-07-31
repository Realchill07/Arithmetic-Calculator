#include <stdio.h>
int main(){
    int x;
    float a;
    float b;
    float sum;
    float sub;
    float multiply;
    float divide;
    printf("This is a calculator for arithematic operations on two numbers[Calculates till 6 decimals :)] .Choose\n 1 for Addition\n 2 for Subtraction\n 3 for Multiplication\n 4 for Divide\n ");
    scanf("%d",&x);
    printf("\n Input first number : ");
    scanf("%f",&a);
    printf("\n Input second number : ");
    scanf("%f",&b);
    if (x==1) {
        sum = a+b;
        printf("Sum of %f and %f is : %f",a,b,sum);
    } 
    else if (x==2) {
        sub = a-b;
        printf("Result when we subtact %f from %f is : %f",b,a,sub);
    }
    else if (x==3) {
        multiply = a*b;
        printf("The multiplication of the numbers %f and %f is : %f",a,b,multiply);
    }
    else if (x==4) {
        divide = a/b;
        printf("After dividing %f by %f we get : %f",a,b,divide);
    }
    else {
        printf("Please write a number from the given options and rerun the application");
    }
    return 0;
}