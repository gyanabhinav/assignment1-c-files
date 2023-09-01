#include <stdio.h> //including the general input and the output header file
int main(){   //Declaring the main function which is single in a given file
    int a,b;     //Declaring a as the integer variable
    printf("Enter the number: ");
    scanf("%d",&a);      //Taking the input from the user
    b = a%10;
    printf("The unit digit of the number %d is %d",a,b);
    return 0;       //Telling the os that the program has successfully executed

}
