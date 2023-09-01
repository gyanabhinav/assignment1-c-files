#include <stdio.h>  //including the standard input and the output header file
int main(){    //Creating the main function which is created only once in a file
    int a,b,c;
    printf("Enter the number: ");
    scanf("%d",&a);
    printf("Enter the second number: ");
    scanf("%d",&b);
    c = (a*10)+b;
    printf("The new number is: %d",c);
    return 0;       //Telling the os that the program has successfully executed
}


