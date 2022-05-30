#include<stdio.h>
int main(int argc , char **argv)
{
    char agestring[10];
    int age;
    int bonus;
    printf("enter your age \n");
    gets(agestring);
    age = atoi(agestring);
    if (age >45)
    {
        bonus = 1000;

    }
    else{
        bonus = 500;
    }
    printf("your age is %d \n, so you are our younger employee \n", age);
    return 0;
}