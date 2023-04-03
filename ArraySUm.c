#include <stdio.h>
int main()
{
    int arr[50],sum=0,n;


    printf("Enter your element : ");
    scanf("%d",&n);
    for(int i=0; i<n; i++)
   {
       scanf("%d",&arr[i]);
   }
    for(int i=0;i<n;i++)
    {
        sum = sum + arr[i];
    }
    printf("Sum OF Array %d\n",sum);
    printf("Average is %.2f\n",(float)sum/n);


}
