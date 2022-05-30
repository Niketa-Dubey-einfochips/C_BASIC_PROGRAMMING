#include<stdio.h>

int intarray[] ={1,2,3,4,5};
int main(int argc, char **argv)
{
    int i;
    for(i=0; i<5 ; i++)
    {
        intarray[i] = ((i+1)*100);
    }
    printf("----for loop---\n");
    for ( i = 0; i < 5; i++)
    {
        printf("%d\n", intarray[i]);
    }
    printf("---while loop(i=0)--\n");
    i=0;
    while(i<5)
    {
        printf("%d\n", intarray[i]);
        i++;
    }
    printf("---do ...whileloop (i=0)---\n");
    i=0;
    do
    {
        printf("%d\n", intarray[i]);
        i++;
    } 
    while(i<5);
    printf("---while loop (i=5) ---\n");
    i=5;
    while(i<5)
    {
        printf("%d\n", intarray[i]);
        i++;

    }
    printf("---do ..while loop (i=5) ---\n");
    i=5;
    do{
        printf("%d\n", intarray[i]);
        i++;

    }
    while(i<10);
     
    
}