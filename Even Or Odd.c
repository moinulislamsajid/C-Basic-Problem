#include <stdio.h>
int main()
{
    // Number of Digits Counts
    int n,c=0;
    scanf("%d",&n);
    while(n!=0){
        n = n/10;
        c+=1;
    }
    printf("The Number of Digits : %d",c);

}
