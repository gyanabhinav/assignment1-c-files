#include <stdio.h>  //including the standard input and the output the output header fi
int main(){
    int r;  //declaring the radius variable
    double A;
    printf("Enter the radius of the circle:\n");
    scanf("%d",&r);  //taking the input from the user
    A = 3.14*r*r;
    printf("Area of circle is %f having the radius %d",A,r);
    return 0;   //Telling the operating system that the program executed successfully
}
