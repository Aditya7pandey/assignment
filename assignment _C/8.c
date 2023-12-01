#include<stdio.h>
int main(){
    int i;
    int gcd;
    int a ,b;
    printf("enter your first number\n");
    scanf("%d",&a);
    printf("enter your second number\n");
    scanf("%d",&b);
    for(i=1;i<=a && i<=b;++i){
        if(a%i==0 && b%i==0){
            gcd = i;
        }
    }
    printf("the gcd od %d and %d is %d\n",a,b,gcd);
    return 0;
}

