#include <stdio.h> //including the standard input and the output header file
int main(){  //Declaring the main function which can be declared only once in a file
    int a,b;
    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("Enter the second number: ");
    scanf("%d",&b);
    printf("Before swapping the numbers are a=%d and b=%d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swapping the numbers are a=%d and b=%d",a,b);
    return 0;    //Telling the os that the program has successfully executed
}
