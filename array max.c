#include <stdio.h>
int main()
{
    int arr[100];
    int n,i;
    printf("How many number : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int max = arr[0];
    for(i =0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
        }
    }
    printf("Maximun number is %d",max);
}
