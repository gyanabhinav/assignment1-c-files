#include <stdio.h> //including the general input and output header file
int main(){
    int a,b;
    printf("Enter the number: ");
    scanf("%d",&a);
    printf("The octal representation of %d is %o\n",a,a);
    printf("The hexadecimal representation of %d is %x",a,a);
    return 0;
}
