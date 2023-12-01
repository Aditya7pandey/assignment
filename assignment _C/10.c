#include<stdio.h>
int main(){
    int i ,largest,smallest,num[10];
    // int num[5] = {1,22,3,55,21};
    printf("enter the numbers in which you want to store values in array\n");
    for (i=0;i<5;++i){
        printf("enter your number\n");
        scanf("%d",&num[i]);
    }
    smallest = num[0];
    largest = num[0];
    for (i=1;i<5;++i){
        if (num[i]>largest){
            largest = num[i];
        }
    }
    for (i=1;i<5;++i){
        if (num[i]<smallest){
            smallest = num[i];
        }
    }
    printf("%d is the largest in array and %d is smallest in array\n",largest,smallest);
    return 0;
}