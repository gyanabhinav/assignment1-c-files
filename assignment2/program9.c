#include <stdio.h>  //including the standard input and the output header file
int main(){     //Creating the main function which is created only once in a given file
     int a;
     printf("Enter the number: ");  //Using the double quotes because of the string constant
     scanf("%d",&a);
     a = (a/10)*10;
     printf("The required number is: %d",a);
     return 0;

}

