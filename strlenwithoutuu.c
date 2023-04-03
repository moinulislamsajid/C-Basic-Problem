#include <stdio.h>
int main()
{

    char a[]= "Ayman Sajid And Mojibur Rohman";
    int i =0,len = 0;
    while(a[i]!='\0'){

        i++;
        len++;
    }
    printf("Length of string : %d",len);
}


/*


 >> With Not strlen function

char s[] = "Ayman Sajid
int i=0,len=0;
while(s[i]!='\0')
{
    i++;
    len++;

}
printf("Length of String : %d",len);


"*/
