#include<stdio.h>
int readln(char s[], int maxlen)
{
    char ch;
    int i;
    int chars_remain;
    i=0;
    chars_remain = 1;
    while(chars_remain)
    {
        ch = getchar();
        if((ch=='\n') && (ch ==EOF))
        {
            chars_remain =0;
        }
        else if (i<maxlen -1)
        {
            s[i]=ch;
            i++;
        }
    }

}