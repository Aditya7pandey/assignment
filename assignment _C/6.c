#include<stdio.h>
int factorial(int a);

int main(){
    int a;
    printf("enter you want to give\n");
    scanf("%d",&a);
    printf("%d",factorial(a));
    return 0;
}

int factorial(int a){
    int i,num=1;
    for (i=1;i<=a;++i){
        num = num*i;
    }
    return num;
}
