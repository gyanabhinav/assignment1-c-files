#include <stdio.h>  //Including the standard input and output header file
int main(){    //Declaring the main function which is only one in the entire main function
    char a;  //Declaring a as the character input
    printf("Enter a character: ");
    scanf("%c",&a);   //Taking the character input
    printf("The ASCII code of '%c' is: %d",a,a);  //printing the ASCII value
    return 0;   //Telling the os that the program has successfully done
}
