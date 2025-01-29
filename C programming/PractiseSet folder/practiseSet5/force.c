#include<stdio.h>
void force(float mass){
    float g = 9.8;
     float f = mass*g;
    printf("The force attraction on the body is: %.2f",f);
    return;
}
    int main(){
        //declaring the variables
        float mass;
        //taking the input from the user
        printf("Enter the mass of the body: ");
        scanf("%f",&mass);
        //calling the function
        force(mass);
         return 0;
    }
