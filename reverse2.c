#include <stdio.h>
int main()
{
    int sum=0,num,rem;
    printf("Enter number : ");
    scanf("%d",&num);
    while(num>0)
    {
        rem = num%10;
        sum = sum * 10 + rem;
        num = num/10;
    }
    printf("Reverse number is %d",sum);
}
