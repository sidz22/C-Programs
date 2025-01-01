/* Write a recursive program which display below pattern in static way changing logic

Input :  6
Output : a  b  c  d  e  f

*/


#include<stdio.h>
void Display(int iNo)
{
    static int i = 0;
    static char ch = 'a';

    if(i < iNo)
    {
        i++;
        Display(iNo);
        printf("%c\t",ch);
        ch++;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}