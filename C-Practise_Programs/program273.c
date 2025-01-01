/* write a program of string which display string in below patterm.

Inpput : Enter string
         54321
Output : 5
         4
         3
         2
         1
*/

#include<stdio.h>

void Display(char *str)
{
    while(*str != '\0')
    {
        printf("%c\n",*str);
        str++;
    }
}

int main()
{
    char Arr[20];

    printf("Enter string\n");
    scanf("%[^'\n']s",Arr);

    Display(Arr);
    return 0;
}