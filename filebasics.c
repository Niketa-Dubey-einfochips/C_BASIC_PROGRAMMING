#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>


#define MAXSTRLEN 200
#define FILENAME "test.txt"

void readlines()
{
    FILE *fp = fopen(FILENAME, "r");
    char line[MAXSTRLEN];
    if (fp != 0)
    {
        while (fgets(line, sizeof(line), fp) != 0)
        {
            fputs(line , stdout);
        }
        fclose(fp);
    }
    else{
        printf("file %s cannot be opened ! ", FILENAME);

    }
}
    void writelines()
    {
        FILE *fp;
        fp = fopen(FILENAME , "w");
        fputs("hello world\n", fp);
        fputs("good bye \n", fp);
        fclose(fp);
    }
    void clearfile()
    {
        FILE *fp ;
         fp = fopen(FILENAME, "w");
         fclose(fp);
    }
    void deletefile()
    {
        if(remove(FILENAME)==0)
        {
            printf("%s file delted .\n ", FILENAME);

        }
        else{
            printf("unable to delete the file : %s .\n", FILENAME);

        }
    }
    int main(int argc , char **argcv)
    {
        writelines();
        readlines();
        return 0;
    }
    //FILE *fp = fopen(FILENAME, "r");
