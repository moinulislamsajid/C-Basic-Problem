#include <stdio.h>
int main()
{

    int arr[10] = {0};
    int n,r;
    printf("Enter number : ");
    scanf("%d",&n);
    while(n>0)
    {
        r = n%10;
        arr[r]++;
        n = n/10;
    }
    for(int i =0; i<10; i++)
    {
        if(arr[i]>1)
        {
            printf("resevered found!!");
            break;
        }

        }

}
