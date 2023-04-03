#include<stdio.h>
int main()
{
    float base,height,area;
    printf("Enter Base : ");
    scanf("%f",&base);
    printf("Enter Height : ");
    scanf("%f",&height);
    area = (float) (0.5) * (base) * (height);
    printf("Area is %.3f\n",area);

}
