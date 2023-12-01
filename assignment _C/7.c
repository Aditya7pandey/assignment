#include<stdio.h>
int factorial(int a);

int main(){
    int a;
    printf("enter you want to give\n");
    scanf("%d",&a);
    printf("%d\n",factorial(a));
    return 0;
}

int factorial(int a){
    if ((a==0)||(a==1)){
        return 1;
    }
    else {
        return a*factorial(a-1);
    }
}
