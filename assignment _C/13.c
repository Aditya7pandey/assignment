#include<stdio.h>
int main(){
    int a[10][10],b[10][10],mul[10][10],i,j,k;
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("enter your number of a\n");
            scanf("%d",&a[i][j]);
        }
    }

       for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("enter your number of b\n");
            scanf("%d",&b[i][j]);
        }
    }

       for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            mul[i][j]=0;
            for(k=0;k<2;k++){
                mul[i][j]+= a[i][k]*b[k][j];
            }
        }
    }

     for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("%d\t",mul[i][j]);
        }
        printf("\n");
     }
    


    return 0;
}