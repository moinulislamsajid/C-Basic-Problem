#include <stdio.h>
int main()
{
    int fact = 1,i,n;
    printf("Enter any positive number : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        fact = fact * i;
    }
    printf("Factorial is : %d",fact);

}
