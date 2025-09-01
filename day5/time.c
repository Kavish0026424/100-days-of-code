//Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

#include<stdio.h>
int main(){
    int time , Hours , Minutes;
    printf("Enter time in seconds :");
    scanf("%d",&time);

    Hours = time/3600;
    Minutes = (time % 3600)/60;

    printf("Time = %.2d:%.2d:%.2d\n",Hours , Minutes , time);
    return 0;

}