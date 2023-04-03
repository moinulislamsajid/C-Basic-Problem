#include <stdio.h>
int main()
{
    int n,sum=0,r,avg;
    printf("Enter your number : ");
    scanf("%d",&n);
    while(n>0)
    {
        r = n%10;       // r = n%10;
                        // sum = sum+r;
                        // n = n/10;
        sum = sum+r;
        n=n/10;
        avg = sum/n;



    }
            printf("Sum is %d\n",sum);
            printf("Avg is %d\n",avg);

}

