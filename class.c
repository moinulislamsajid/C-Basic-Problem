#include <stdio.h>
int main()
{
    int sum=0,num,rem;
    printf("Enter Any number : ");
    scanf("%d",&num);
    while(num>0)
    {
        rem = num%10;
        sum = sum + rem * rem * rem;
        num = num/10;
    }
    printf("The sum is : %d",sum);
}
