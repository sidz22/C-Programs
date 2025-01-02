/* write a program of string which display string in below patterm in if Condition
   and in pre (++str) Condition

Inpput : Enter string
         HELLO
Output : H
         E
         L
         L
         O
*/

#include<stdio.h>

void Display(char *str)
{
    if(*str != '\0')
    {
        printf("%c\n",*str);
        Display(++str); // Tail Recurssion
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