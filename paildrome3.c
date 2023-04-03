#include <stdio.h>
int main()
{
    int sum=0,temp,num,rem;
    printf("Enter Any number : ");
    scanf("%d",&num);
    temp = num;
    while(temp>0)
    {
        rem = temp%10;
        sum = sum *10 + rem;
        temp = temp /10;
    }
    if(num==sum)
    {
        printf("Palindrome number");
    }
    //cccccccccccccwwwwwwwwwwwwwwwwwwwwwwwwww
    else
    {
        printf("Not a Palindrome");
    }
}
