#include <stdio.h>
int main()
{
    int d[10] ={0};
    int n,r;
    printf("Enter number to get return or not : ");
    scanf("%d",&n);
    while(n>0){
        r = n%10;
        d[r]++;
        n = n/10;
    }
    for(int i=0;i<10;i++)
    {
        if(d[i]>0)
        {
            printf("Reeated Found!");
            break;

        }
        else
        printf("Not a return value");
        break;
    }
}
