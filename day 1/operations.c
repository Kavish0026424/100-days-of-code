#include<stdio.h>
int main(){
    int num1 , num2 , sum , Difference , Product , Quotient;
    printf("Enter first no. :");
    scanf("%d",&num1);

    printf("Enter second no. :");
    scanf("%d",&num2);

    sum = num1 + num2;
    Difference = num1 - num2;
    Product  = num1 * num2;
    Quotient = num1/num2;

    printf("Sum :%d\n", sum );
    printf("Difference :%d\n", Difference);
    printf("Product :%d\n", Product);
    printf("Quotient :%d\n", Quotient);


}