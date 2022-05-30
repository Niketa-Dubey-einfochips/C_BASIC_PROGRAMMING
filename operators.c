#include<stdio.h>
int main()
{
    int a;
    int b;
    a=10;
    b=12;
    int age = 70;
    int bonus;
    if(age==45)
    {
            bonus = 1000;
    }
    else{
        bonus = 500;
    }
    printf("your age is %d , so your bouns is %d. \n ", age , bonus);
    if (age<=70)

    {
        printf(" you are one of our youngest employee \n");

    }
    if(bonus >= 1000)
    {
        printf("you've earned a high bonus \n");

    }
    
}