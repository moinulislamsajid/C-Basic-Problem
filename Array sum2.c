#include <stdio.h>
int main()
{
    int arr[10];

    int sum =0,n;
    float avg;
    printf("How many number : ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i =0; i<n; i++)
    {
        sum = sum + arr[i];
    }
    avg = (float)sum/n;
    printf("Sum is %d\n",sum);
    printf("Average  is %f",avg);
}
