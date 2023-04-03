#include <stdio.h>
int main()
{
    int count=0,i,num;
    printf("Enter any number to check prime or not : ");
    scanf("%d",&num);
    for(i=2;i<=num;i++){
        if(num%2==0){
            count++;
            break;
        }
    }
    if(count==0)
    {
        printf("Prime Number");
    }
    else
    {
        printf("Not a prime number");
    }
}
