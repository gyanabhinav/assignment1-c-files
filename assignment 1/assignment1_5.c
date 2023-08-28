#include <stdio.h> //including the standard input and output header file
int main(){      //declaring the main function
    char a[100]; //declaring the character array
    printf("Enter the sentence whose length is to be calculated\n");
    int length;   //declaring the integer variable
    gets(a);      //taking the input using the gets function
    length = strlen(a);
    printf("The length of the string is %d",length);
    return 0;  //telling the os that the the program is exited successfully
}
