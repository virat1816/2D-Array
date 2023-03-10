//11.WAP to print & find sum of inner elements of 5X5 array.

#include<stdio.h>

int main(){

   int a[5][5]={{1, 2, 3, 4, 5},
                     {6, 7, 8, 9, 10},
                     {11, 12, 13, 14, 15},
                     {16, 17, 18, 19, 20},
                     {21, 22, 23, 24, 25} },i,j,sum=0;

    /*for(i=0 ;i<5; i++){
        for(j=0 ;j<5; j++){
            printf("Enter array value:");
            scanf(" %d",&a[i][j]);
        }
    }*/
//print Matrix
    for(i=0; i<5 ;i++){
        for(j=0; j<5; j++){
            printf(" %d",a[i][j]);
        }
        printf("\n");
    }
    //inner element sum
    for(i=1; i<4 ;i++){
        for(j=1; j<4; j++){
               sum+=a[i][j];
        }
    }
        printf("Inner elements Sum: %d",sum);
   
    return 0;
}