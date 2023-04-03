#include <stdio.h>
int main(void)
{
    int n,r,sum=0;
    printf("Enter any positive number : ");
    scanf("%d",&n);
    while(n>0){
        r = n%10;
        sum = sum *10 + r;
        n = n/10;
    }
    printf("Reverse number is = %d",sum);
}
