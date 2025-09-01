#include<stdio.h>
int main(){
    int a,b;
    printf("Enter first no :");
    scanf("%d",&a);

    printf("Enter second no. :");
    scanf("%d",&b);

    printf("Before swap :%d %d\n",a ,b);

    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swap :%d %d",a ,b);
    return 0;
}
