#include <stdio.h>
int main()
{
    int num,temp,fact,rem,sum=0;
    printf("Enter any number : ");
    scanf("%d",&num);
    temp = num;
    while(temp>0)
    {
        rem = temp%10;
        fact =1;
        for(int i =1; i<=rem;i++)
        {
            fact = fact * i;
        }
        sum = sum + fact;
        temp = temp/10;
    }
    if(num == sum)
        printf("Strong Number");
    else
        printf("Not Strong Number");
}
