/* Write a program which display below pattern in for condition

Input :  6
Output : a  b  c  d  e  f

*/


#include<stdio.h>
void Display(int iNo)
{
    int i = 0;
    char ch = 'a';

    for(i = 0; i < iNo; i++)
    {
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