#include <stdio.h>
int main()
{
    int n,r,sum=0;
    printf("Enter any number : ");
    scanf("%d",&n);
    int temp = n;
    while(temp>0)
    {

        r = temp%10;
        sum = sum + r*r*r;
        temp = temp/10;
    }
    if(n==sum)
    {
        printf("Armstrong Number");
    }
    else
    {
        printf("Not Armstrong Number");
    }
}
