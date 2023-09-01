#include <stdio.h>  //Including the standard input and the output header file
int main(){  //Creating the main function which is single in a file
    int a,b,t;
    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("Enter the second number: ");
    scanf("%d",&b);
    printf("Initially the number a=%d and b=%d\n",a,b);
    t=a;
    a=b;
    b=t;
    printf("Finally numbers are a=%d and b=%d",a,b);
    return 0;    //Telling the os that the program has successfully executed
}
