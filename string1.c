#include<stdio.h>

char str1[]= "helloe";
char str2[] = "goodbye\0 world";
void showstring(char *str)
{
    int i;
    int len = strlen(str);
    printf("length of %s is %d \n",str , len);
    for ( i=0 ; i<=len ; i++)
    {
        if(str[i] == '\0')
        {
            printf("char [%d] = NULL\n " , i);

        }
        else{
            printf("char [%d] = %c\n", i, str[i]);

        }
    }
}
int main(int argc, char ** argv)
{
    showstring(str1);
    showstring(str2);
    printf("%s\n", str1);
    printf("%s\n ", str2);
}