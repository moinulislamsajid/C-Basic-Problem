#include <stdio.h>
int main()
{
    int n,fact=1;
    printf("Enter any positive  Number : ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){


        fact = fact * i;
    }
    printf("Factorial Number is %d",fact);
}
