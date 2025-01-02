/* write a program to display below pattern with string
Input : Enter string
Output : hello
         o
         lo
         llo
         ello
         hello

*/
#include<stdio.h>

void Display(char *str)
{
    if(*str != '\0')
    {
        Display(str+1); // Head Recurssion
        printf("%s\n",str);
    }
}

int main()
{
    char Arr[20];

    printf("Enter string\n");
    scanf("%[^'\n']s",Arr);

    Display(Arr);   // Display(920);
    return 0;
}