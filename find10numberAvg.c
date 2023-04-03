#include<stdio.h>
#define N 10
int main()
{
    int count = 0;
    float avg,sum=0,number;
    printf("Enter 10 number to calculate average number : ");
    while(count<N)
    {
        scanf("%f",&number);
        sum = sum+number;
        count++;
    }
    avg = sum/N;
    printf("N : %d\n",N);
    printf("Sum is : %.2f\n",sum);
    printf("Average is : %.2f\n",avg);
}
