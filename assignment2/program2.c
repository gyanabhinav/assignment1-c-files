#include <stdio.h>  //Including the standard input and the output header file
int main(){   //Declaring the main function which is single in a file
    int a,b;
    printf("Enter the number: ");
    scanf("%d",&a);
    b = a/10;
    printf("The number %d without the last digit is %d",a,b);
    return 0;   //Telling the os that the program has successfully executed

}
