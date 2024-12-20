/* Write a recursive program which accept string from user and count white spaces.
Input : HE llo WOr ID
Output : 3
*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

int Whitespace(char *str)
{
    int fd = 0, iRet = 0, i =0,iCnt = 0;
    char Data[1024];

    fd = open(str,O_RDWR);
    if(fd == -1)
    {
        printf("Unable to open the file\n");
        return -1;  // Failure
    }

    while((iRet = read(fd,Data,sizeof(Data))) != 0)
    {
        for(i = 0; i< iRet; i++)
        {
            if(Data[i] == ' ')
            {
                iCnt++;
            }
        }
    }

    close(fd);
    return iCnt;
}

int main()
{
    char str[20];
    int iRet = 0;

    printf("Enter file name to open\n");
    scanf("%s",str);

    iRet = Whitespace(str);
    printf("Number of spaces are : %d\n",iRet);

    return 0;
}
