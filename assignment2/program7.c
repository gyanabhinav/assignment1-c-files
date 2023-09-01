#include <stdio.h>  //Including the standard input and the output header file
int main(){         //Declaring the main function which is only one in the given file
    int a;          //Declaring a as the integer variable
    printf("Enter the number: ");
    scanf("%d",&a);
    if(a & 1){
        printf("Odd number");
    }
    else{
        printf("Even number");
    }
    return 0;   //Telling the os that the program has successfully executed
}
