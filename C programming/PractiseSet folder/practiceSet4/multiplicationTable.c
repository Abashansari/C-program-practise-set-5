#include<stdio.h>
int main(){
int table,mul ;
printf("Enter a number to get multiplication table :");
scanf("%d",&table);
for(int i =0;i<=10;i++){
 mul = i*table;
    printf("%d\n",mul);
}

 return 0;
}