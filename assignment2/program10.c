#include <stdio.h>  //including the standard input and the output header file
#include <string.h>
int main(){         //including the standard input and the output header file
    char a[20];     //creating the character array
    char b[20];
    char c[40];
    printf("Enter the number: ");
    scanf("%s",a);
    printf("Enter the digit to be appended: ");
    scanf("%s",b);
    strcpy(c,a);
    strcat(c,b);
    printf("The new number is: %s",c);
    return 0;   //Telling the os that the program has successfully executed
}

