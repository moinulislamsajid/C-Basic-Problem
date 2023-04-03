#include <stdio.h>
int main()
{
    int r,num,sum=0;
    printf("Enter any number : ");
    scanf("%d",&num);
    while(num>0)
    {
        r = num%10;
        sum = sum * 10 + r;
        num = num/10;

    }
    printf("Reverse Number is %d ",sum);
}
