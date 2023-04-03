#include <stdio.h>
int main()
{
    int i,count=0,n;
    printf("Enter any number : ");
    scanf("%d",&n);
    for(i=2;i<=n;i++){
        if(n%2==0)
        {
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
