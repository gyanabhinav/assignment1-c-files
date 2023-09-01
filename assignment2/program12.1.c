#include <stdio.h>  //including the standard input and output header file
int main(){         //creating the main function which is created only once in a file
    int a,b,c,d,e;
    printf("Enter a three digit number: ");
    scanf("%d",&a);
    b=a%10;        //Extracting the ones digit
    c=(a/10)%10;   //extracting the tens digit
    d=(a/100)%10;  //extracting the hundreds digit
    e = ((b*100)+(d*10)+c);
    printf("The required number is: %d",e);
    return 0;      //Telling the os that the program has successfully executed
}
