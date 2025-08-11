#include <stdio.h>
#include <math.h>
int main(){
    int x;
    float a;
    float b;
    float c;
    float d;
    float e;
    float sum;
    float sub;
    float multiply;
    float divide;
    float percentage;
    float root;
    float power;
    printf("This is a calculator for operations on two numbers[Calculates till 6 decimals :)] .Choose\n 1 for Addition\n 2 for Subtraction\n 3 for Multiplication\n 4 for Divide\n 5 for percentage\n 6 for sqaure root\n 7 for power of a number\n");
    scanf("%d",&x);
    if (x == 6) {
        printf("Input the number : ");
        scanf("%f",&c);
    }
    else if (x == 7) {
        printf("Input the base : ");
        scanf("%f",&d);
        printf("Input the power : ");
        scanf("%f",&e);
    }
    else {
    printf("\n Input first number : ");
    scanf("%f",&a);
    printf("\n Input second number : ");
    scanf("%f",&b);
    }
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
    else if (x==5) {
        percentage = (a / b) * 100;
        printf("%f is %f percent of %f",a,percentage,b);
    }
    else if (x==6){
        root = sqrt(c);
        printf("Square root of %f is %f",c,root);
    }
    else if (x==7){
        power = pow(d,e);
        printf("%f to the power of %f is : %f",d,e,power);
    }
    else {
        printf("Please write a number from the given options and rerun the application");
    }
    return 0;
}