#include <stdio.h>
int main()
{
   int min,max,sum=0;
   printf("Enter 2 two  positive number : ");
   scanf("%d %d",&min,&max);
   while(min <= max){

    sum = sum+min;
    printf("%d ",min);
    min++;
    if(min > max){
        printf(" = %d\n",sum);
    }
    else{
        printf("+ ");
    }
   }
}
