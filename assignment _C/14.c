#include<stdio.h>
int main(){
    int num,i,sum;
    printf("enter your number\n");
    scanf("%d",&num);
    for(i=1;i<num;++i){
        if(num%i==0){
            sum = sum +i;
        }
    }
    if(sum == num){
        printf("it is perfect number");
    }
    else{
        printf("its not a perfect number");
    }
    return 0;
}