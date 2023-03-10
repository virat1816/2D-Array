//2.WAP to find length of 2D array.

#include<stdio.h>

int main(){

    int r,c,i,j;
    int size_r,size_c;

    printf("Enter row size:");
    scanf("%d",&r);

    
    printf("Enter column size:");
    scanf("%d",&c);

    int a[r][c];

    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
           printf("Enter Value a[%d] [%d] :",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r;i++)
     {
         printf("\n");
           for(j=0;j<c;j++){
            printf("%d\t",a[i][j]);
        }
     }

           size_r= sizeof(a)/sizeof(a[0]);
           size_c= sizeof(a[0])/sizeof(a[i][j]);

         printf("\nlength of rows: %d\n", size_r);
         printf("length of columns: %d\n", size_c);
    return 0;
}
