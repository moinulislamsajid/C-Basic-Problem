#include <stdio.h>
#define N 10
int main()
{

    int count =0;
    float sum =0,avg = 0,number;
    printf("Enter 10 number to find sum and average : ");
    while(count<N){
        scanf("%f",&number);
        sum = sum + number;
        count++;
    }
    avg = sum/N;
    printf("Number = :: %d\n",N);
    printf("Sum is = :: %f\n",sum);
    printf("Average  = :: %f\n",avg);

}
