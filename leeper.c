#include <stdio.h>
int main()
{
    int year;
    printf("Enter a year to check leep year or not : ");
    scanf("%d",&year);
    if(year%400==0){
        printf("Leep Year");

    }
    else if(year%4==0 && year%100!=0)
    {

        printf("Leep Year");
    }
    else {
        printf("not a leep year");
    }

}
