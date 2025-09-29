#include<stdio.h>
#include<stdlib.h>
int main(){
    system("clear");
    int number,digit1,digit2,digit3;
    printf("Input Number : ");scanf("%d",&number);
    digit1 = number/100;
    digit2 = (number%100)/10;
    digit3 = (number%100)%10;
    number = digit3 * 100 + digit2 * 10 + digit1;
    printf("Number is %d \n",number);
}