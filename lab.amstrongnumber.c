#include <stdio.h>
int main()
{
    int temp,number,sum=0,rem;
    printf("Enter number to check palindrome  :  ");
    scanf("%d",&number);
    temp = number;
    while(temp>0){
        rem = temp % 10;
        sum = sum  + rem*rem*rem;
        temp = temp/10;
    }
    if(number==sum)
    {
        printf("This is Amstrong number");
    }
    else{
        printf("Not a Amstrong number");
    }
}

