/* Write a program which display below pattern in while condition

Input :  6
Output : a  b  c  d  e  f

*/


#include<stdio.h>
void Display(int iNo)
{
    int i = 0;
    char ch = 'a';

    while(i < iNo)
    {
        printf("%c\t",ch);
        ch++;
        i++;
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