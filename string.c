#include<stdio.h>
int main()
{
        char str[] ="hello";
        char *str2 ="goodbye";
        printf("%x %x %s \n", &str , str , str);
        printf("%x %x %s \n", &str2, str , str );
        return 0;
} 