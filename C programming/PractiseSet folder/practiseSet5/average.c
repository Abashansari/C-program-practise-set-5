#include<stdio.h>
// Declaring the user-defined function
int average(int a,int b, int c){
    int avg = (a+b+c)/3;
    printf("The average of the three numbers is: %d",avg);
    return 0; 
}
int main(){
    // declaring the variables
int a,b,c,avg;
// taking the input from the user
printf("Enter the first number: ");
scanf("%d",&a);
printf("Enter the second number: ");
scanf("%d",&b);
printf("Enter the third number: ");
scanf("%d",&c);
//calling the user-defined function
  
     avg = average(a,b,c);
    return 0;
}