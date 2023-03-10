//4.WAP to find peform addition of 2D array & store it into another.

#include<stdio.h>

int main(){

    int r,c,i,j;

    printf("Enter the number of rows : ");
    scanf("%d", &r);

    printf("Enter the number of column : ");
    scanf("%d", &c);

    int a[r][c],b[r][c],sum[r][c];

   //first matrix value
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++){
            printf("Enter  first matrix value [%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
//Second matrix value
    
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++){
            printf("Enter second matrix value [%d][%d]: ", i, j);
            scanf("%d", &b[i][j]);
        }
    }
    //Matrix print
    for(i=0; i<r; i++) {
        for(j=0; j<c; j++) {
            
            printf("%d ", a[i][j]);
          
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
//Sum of matrices
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++){
            sum[i][j]=a[i][j]+b[i][j];
        }
    }

    printf("\nSum of matrices\n");
    for(i=0; i<r; i++) {
        for(j=0; j<c; j++) 
        {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
    return 0;

}