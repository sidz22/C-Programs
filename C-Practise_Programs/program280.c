/* write a program to display below pattern with string
Input : Enter string
Output : hello
         hello
         ello
         llo
         lo
         o
*/

#include<stdio.h>

void Display(char *str)
{
    if(*str != '\0')
    {
        printf("%s\n",str);
        Display(str+1); // Head Recurssion
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