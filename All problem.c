#include <stdio.h>
int main()
{
    int Marks;
    printf("Enter a Marks To Check Your Result : ");
    scanf("%d",&Marks);

            if(Marks <= 100 && Marks>= 0){
                if(Marks>=80 && Marks<=100){
                    printf("%d Marks is A+",Marks);
                }
                else if(Marks<=79){
                    printf("%d Marks is A",Marks);
                }
                else if(Marks<=69){
                    printf("%d Marks is A-",Marks);
                }
                else if(Marks<=59){
                    printf("%d Marks is B",Marks);
                }

                }
                else{
                    printf("FAiled");




