#include <stdio.h>  //including the standard input and the output header file
void specified_format(char *output_format){  //creating the specified format function
    int hour, minute;                        //declaring the hour and the minute variable as integer
    sscanf(output_format,"%d:%d",&hour,&minute);
    printf("%02d hour and %02d minute",hour,minute);
}

int main(){
    char user_input[6];   //creating the character array of length 6 including the null character
    printf("Enter the time in HH:MM format: ");
    scanf("%s",user_input);
    specified_format(user_input);   //passing the array to the specified format function
    return 0;     //Telling the os that the function has successfully terminated
}
