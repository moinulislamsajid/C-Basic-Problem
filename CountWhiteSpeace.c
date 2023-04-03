#include <stdio.h>

int count_space()
{
    char s[100] = "Ayman Sajid Loakl akao HDDH DU ";
    int i,count =0;
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i] == ' ')

            count++;
       return count;
    }
}








int main()
{

    count_space();
}
