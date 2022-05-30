#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>>
#include<string.h>

void readin(char *filename)
{
        FILE *f ;
        long size;
        char *b;
        size_t item_read;
        int linecount;
        int i;
        linecount = 0;
        f = fopen(filename , "rb");
        if(f==0)
        {
            printf("cannot open '%s'\n", filename);

        }
        else 
        {
            fseek(f ,0,SEEK_END);
            size = ftell(f);
            rewind(f);
            b = (char*)malloc(size);
            item_read = fread(b, 1,size , f);
            fclose(f);
            for( i =0 ;i<size ;i++)
            {
                if(b[i] == '\n')
                {
                    linecount++;
                }
            }
            printf("number of lines was %d with %d chars (%d items read ).\n", linecount , i , item_read);
            free(b);

        }
}

int main(int argc , char **argv )

{
    readin("sonnet.txt");
    return 0;
}