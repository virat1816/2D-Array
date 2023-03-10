// 7.WAP to perform diagonal sum of 2D array.

#include<stdio.h>

int main(){

    int a[10][10],r,c,i,j,sum=0;

     printf("Enter row size:");
    scanf("%d",&r);
 
    printf("Enter column size:");
    scanf("%d",&c);

    for(i=0;i<r;i++)
    {
      for(j=0;j<c;j++)
        {
            printf("Enter Value a[%d] [%d] :",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0; i<r; i++)
    {
          for(j=0; j<c; j++)
          {
            printf(" %d",a[i][j]); 
            if(i==j){
               sum+=a[i][j];
              }   
          }
            printf("\n");    
    }
        printf("Diagonal sum = %d",sum);
    return 0;
}
