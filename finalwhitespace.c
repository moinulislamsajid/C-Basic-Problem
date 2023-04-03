#include <stdio.h>
int white_space()
{
    char s[100] = "Ay man S j i d b a d l u c k";
    int i,count =0;
    for(i=0;s[i] != '\0'; i++)
    {
        if(s[i] == ' ')
        {
            count++;
        }

    }
    printf("The Space of string : %d",count);
}
int main()
{
    white_space();

}
