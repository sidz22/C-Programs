/* write a program of string which display string in below patterm in if Condition
    In Head Recurrsion

Inpput : Enter string
         HELLO
Output : O
         L
         L
         E
         H
*/

#include<stdio.h>

void Display(char *str)
{
    if(*str != '\0')
    {
        Display(str+1); // Head Recurssion
        printf("%c\n",*str);
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