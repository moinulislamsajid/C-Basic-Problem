#include <stdio.h>
int main()
{
    int d[10] = {0};
    int n,r;
    printf("Enter number to check reserved or not : ");
    scanf("%d",&n);
    while(n>0)
    {
        r = n%10;
        d[r]++;
        n = n/10;
    }
    for(int i =0; i<10; i++)
    {
        if(d[i]>1)

            printf("Reserved Found!!");
            break;
        else
        printf("Not found");
        break;


    }



    }





