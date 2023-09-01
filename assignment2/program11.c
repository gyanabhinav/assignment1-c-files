#include <stdio.h>  //including the standard input and the output header file
int main(){      //Creating the main function which is created only once in the file
    float a,b;
    printf("Enter the amount in rupees: ");
    scanf("%f",&a);
    b = a/76.23;
    printf("The price in USD is %.3f",b);
    return 0;  //Telling the os that the program has successfully executed
}

