#include <stdio.h>
int main()
{
    int A[10][10],B[10][10],c[10][10],i,j,nofr,nofc;
    printf("Enter number of row and column of 1st matrix : ");
    scanf("%d %d",&nofr,&nofc);
    for(i=0;i<nofr;i++)
    {
        for(j=0;j<nofc;j++)
        {
            printf("A[%d][%d] : ",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }

    printf("Enter number of row and column of 2nd matrix : ");
    scanf("%d %d",&nofr,&nofc);
    for(i=0;i<nofr;i++)
    {
        for(j=0;j<nofc;j++)
        {
            printf("A[%d][%d] : ",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }
    printf("A = ");
     for(i=0;i<nofr;i++)
    {
        printf("\t");
        for(j=0;j<nofc;j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }



    printf("B = ");
     for(i=0;i<nofr;i++)
    {
        printf("\t");
        for(j=0;j<nofc;j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");

    }
    // addition 2 matrix
    for(i=0;i<nofr;i++)
    {
        for(j=0;j<nofc;j++)
        {
            c[i][j] = A[i][j] + B[i][j];
        }

    }
    printf("\nAddition C = ");
     for(i=0;i<nofr;i++)
    {
        for(j=0;j<nofc;j++)
        {
           printf("%d ",c[i][j]);
        }
        printf("\n");
        printf("\t");
    }



}
