#include <stdio.h>
int main()
{
    int sum =0,temp,rem,num;
    printf("Enter number to check strong number : ");
    scanf("%d",&num);
    temp = num;
    while(temp>0)
    {
        rem = temp%10;
        int fact =1;
        for(int i = 1;i<=rem;i++)
        {
            fact = fact *i;

        }
         sum = sum + fact;
         temp = temp/10;
    }
    if(sum==num)
    {
        printf("Strong Number");

    }
    else
    {
        printf("Not a Strong Number");
    }
}
