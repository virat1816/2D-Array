// 3.WAP to find average of 2D array.

#include<stdio.h>

int main(){

    int a[3][3],i,j,r,c;
    int sum=0;
    float avg;

    printf("Enter the number of rows and columns:");
    scanf("%d%d",&r,&c);
    
     for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
             printf("Enter the elements of the matrix:");
            scanf("%d",&a[i][j]);
        }
    }
   for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            sum=sum+a[i][j];
        }
    }
    avg=sum/(r*c);
    printf("\nAverage of all the elements of the matrix = %.2f",avg);

    return 0;
}