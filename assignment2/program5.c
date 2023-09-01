#include <stdio.h>  //including the standard input and the output header file
int main(){
    int number,digit1,digit2,digit3,sum;
    printf("Enter a three digit number: ");
    scanf("%d",&number);
    digit1 = number/100;  //Extracts the hundreds digit of a number
    digit2 = (number/10)%10; //Extracts the tens digit of a number
    digit3 =  number%10;     //Extracts the ones digit of a number
    sum = digit1+digit2+digit3;
    printf("The sum of the digits of a three digit number %d is %d",number,sum);
    return 0;
}
