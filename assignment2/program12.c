#include <stdio.h>   //including the standard input and output header fie
int main(){          //creating the main function which is created only once in a file
    int x,a,b;       //Declaring x,a,b as the integer variables
    printf("Enter a three digit number: ");  //Using the double quotes because of the string constant
    scanf("%d",&x);
    a=x%10;          //Extracting the ones digit
    x=x/10;          //removing the ones digit
    b=(a*100)+x;
    printf("The required number is: %d",b);
    return 0;      //Telling the os that the program has successfully executed
}
