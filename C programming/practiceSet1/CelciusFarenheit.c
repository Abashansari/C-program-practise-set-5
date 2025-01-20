#include<stdio.h>
int main (){
    //--------------------CONVERT CELCIUS TO FARENHEIT-------------------------------------->
    //---------FORMULA TO CONVERT CELCIUS TO FARENHEIT(°F = °C × (9/5) + 32)---------->
    float celcius;
    printf("Enter your celcius degree to convert it into Farenheit:");
scanf("%f",&celcius);
 float f= (celcius*9/5)+32;
 printf(" the farenheit is :%f",f);






    return 0;
}