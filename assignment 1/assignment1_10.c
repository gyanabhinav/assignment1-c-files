#include <stdio.h> //including the standard input and the output header file

void convert_date_format(char *input_date){
    int day, month, year;
    sscanf(input_date, "%d/%d/%d", &day,&month,&year);
    printf("Day - %02d, Month - %02d, Year - %d\n",day,month,year);

}
int main(){
    char user_input[11];  //DD/MM/YYYY + Null character

    //Get the user input
    printf("Enter a date in DD/MM/YYYY format: ");
    scanf("%s",user_input);

    //calling the function to display the required result
    convert_date_format(user_input);
    return 0;
}

