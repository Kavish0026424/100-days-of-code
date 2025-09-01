//Q8: Write a program to find and display the sum of the first n natural numbers.

#include<stdio.h>
int main(){
    int n;
    printf("Enter no. :");
    scanf("%d",&n);

    printf("Sum of first n natural no.s :%d",(n*(n+1)/2));

    return 0;

}

