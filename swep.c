#include<stdio.h>
int main()
{
   // use theired varibale
   /*
    int a,b,temp;
    a = 20;
    b = 10;
    temp = a; // temp =  20
    a = b;// a = 10
    b = temp; // b=20

    printf("A is : %d\n",a);
    printf("B is : %d\n",b);*/
    int a,b;
    a =20;
    b = 10;

    a = a-b; // 10
    b = a+b; // b = 20
    a = b-a; // a = 10

    printf("A is : %d\n",a);
    printf("B is : %d\n",b);



}
