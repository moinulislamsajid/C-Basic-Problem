#include <stdio.h>
int main()
{
    int max,min,sum=0;
    printf("Enter the range of number : ");
    scanf("%d %d",&min,&max);
    while(min<=max){
        sum = sum+min;
        printf("%d ",min);
        min++;
    }
    if(min>max){
        printf(" = %d",sum);
    }
    else{
        printf("+ ");
    }
}
