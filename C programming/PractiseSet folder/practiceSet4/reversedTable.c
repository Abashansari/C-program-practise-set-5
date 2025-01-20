#include<stdio.h>
int main(){
    int num ;
    printf("Enter the number to get reversed table :");
    scanf("%d",&num);
    for(int i = 10; i>=0 ;i--){
        int result = num*i;
        printf("%d\n",result);

    }
    return 0;
}
