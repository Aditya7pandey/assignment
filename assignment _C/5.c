#include<stdio.h>
int add(int a, int b);
int subtract(int a, int b);
int multiply(int a , int b);
float divide(float a , float b);

int main(){
    int a , b;
    printf("enter your number\n");
    scanf("%d",&a);
    printf("enter your number\n");
    scanf("%d",&b);
    printf("%d\n",add(a,b));
    printf("%d\n",subtract(a,b));
    printf("%d\n",multiply(a,b));
    printf("%f\n",divide(a,b));
    return 0;
}
int add(int a, int b){
    return a+b;
}
int subtract(int a, int b){
    return a-b;
}
int multiply(int a , int b){
    return a*b;
}
float divide(float a , float b){
    return a/b;
}

