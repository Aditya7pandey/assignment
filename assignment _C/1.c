#include<stdio.h>
int sum (int num[]);
int avg (int x);

int main(){
    int x;
    int num[] = {2,2,2};
    x = sum(num);
    printf("the sum of the numbers is %d\n",sum(num));
    printf("the average of the numbers is %d\n",avg(x));
    return 0;
}

int sum (int num[]){
    int i, addition=0;
    for (i=0;i<3;i++){
        addition = addition + num[i];
    }
    return addition;
}

int avg (int x){
    int average;
    average = x/3;
    return average;
}
