#include <stdio.h>
//declaring the user-defined function
void farenheit(int celcius){
    float farenheit = (celcius*9/5)+32;
    printf("The temperature in Farenheit is: %.1f",farenheit);
    return;
}
int main(){
    //declaring a variable.
    float celcius;
    //taking the input from the user.
    printf("Enter the temperature in Celcius: ");
    scanf("%f",&celcius);
    // calling the function
      farenheit(celcius);

    return 0;
}