#include <stdio.h>   //including the standard input and the output header file
int main(){
    int x,y,z;       //declaring the variable as the integer types
    printf("Enter the 2 numbers\n");  //String constant since it is enclosed in the double quotes
    scanf("%d %d",&x,&y);        //storing the numbers in the already declared x,y and z variables
    z = x+y;
    printf("The sum of the two numbers is: %d",z);
    return 0;     //returning the value 0 so that the it will properly come out from the main program without any problem in the operating system
}
