#include<stdio.h>

char chararray[] = "hello world! good bye ";
void whilebreak()
{
    int i;
    char c;
    char str[50];
    i=0;
    while(i>=0)
    {
        c = chararray[i];
        printf("[%d]='%c' ", i, c);
        if(c=='!')
        {
            str[i] = '\0';
            break;
        }
        str[i]=c;
        i++;
    }
    printf("\n after while loop , str = '%s'", str);

}
void forbreak()
{
    int i;
    char str[50];
    char c;
    for (i=0; i<50; i++)
    {
        c = chararray[i];
        if(c==' ')
        {
            str[i] = c;
            continue;
        }
        if(c=='!')
        {
            str[i] = '\0';
            break;
        }
        str[i] = chararray[i]+1;

    }
    printf("encryptef string is '%s' \n", str);
    for (i=0 ; i<50 ;i++)
    {
        c= str[i];
        if(c == ' ')
        {
            continue;
        }
        if( c == '\0')
        {
            break;
        }
        str[i] = str[i] -1 ;

    }
    printf("decrypted string is '%s' \n ", str);

}
int main(int argc , char **argv)
{
    forbreak();
    whilebreak();
    
}