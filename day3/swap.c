//Q6: Write a program to swap two numbers using a third variable.

#include<stdio.h>
    int main(){
    int a,b,c;
    printf("Enter first no. :");
    scanf("%d",&a);

    printf("Enter second no. :");
    scanf("%d",&b);
    printf("Before swap :%d %d\n", a , b);

    c = a;
    a = b;
    b = c;
    printf("After swap : %d %d\n", a , b);

    return 0;
}

