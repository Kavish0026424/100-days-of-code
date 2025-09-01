#include<stdio.h>
#include<math.h>
int main(){
    float principal , rate , time;
    printf("Enter Principal :");
    scanf("%f",&principal);

    printf("Enter Rate :");
    scanf("%f",&rate);

    printf("Enter Time :");
    scanf("%f",&time);

    printf("Simple Interest :%.2f\n",((principal * rate * time)/100.0));
    printf("Compound Interest :%.2f\n",(principal * pow((1 + rate/100.0),time)- principal));

    return 0;

}
