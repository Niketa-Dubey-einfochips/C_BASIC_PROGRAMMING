#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

#define NUMBER_OF_CDS 4

enum score{
    Terrible, Bad, Average, Good, Excellent
};
typedef char str50[50];
typedef struct cd {
    str50 name;
    str50 artist;
    int trackcount;
    enum score rating;

} CD;

CD cd_collection[NUMBER_OF_CDS];
void creat_cdcollection()
{
    strcpy(cd_collection[0].name , "great hits");
    strcpy(cd_collection[0].artist, "polly darton");
    cd_collection[0].trackcount = 20;
    cd_collection[0].rating = Excellent;

    strcpy(cd_collection[0].name , "great hits");
    strcpy(cd_collection[0].artist, "polly darton");
    cd_collection[0].trackcount = 20;
    cd_collection[0].rating = Excellent;

    strcpy(cd_collection[1].name , "Mega songs");
    strcpy(cd_collection[1].artist, "Lady Googoo");
    cd_collection[1].trackcount = 18;
    cd_collection[1].rating = Good;


    strcpy(cd_collection[2].name , "best ones");
    strcpy(cd_collection[2].artist, "the wartongs");
    cd_collection[2].trackcount = 24;
    cd_collection[2].rating = Average;

    strcpy(cd_collection[3].name , "songs from the shows");
    strcpy(cd_collection[3].artist, "the singing swingers");
    cd_collection[3].trackcount = 22;
    cd_collection[3].rating = Excellent;
}
 void display_cdcollection() {
     int i;
     CD thiscd;
     for(i=0;i <NUMBER_OF_CDS; i++)
     {
         thiscd = cd_collection[i];
         printf("CD #%d: '%s' by %s has %d tracks. MY rating = %d\n", i , thiscd.name , thiscd.artist , thiscd.trackcount , thiscd.rating);

     }
    /* data */  
}

int main(int argc , char **argv)
{
    creat_cdcollection();
    display_cdcollection();
    return 0;

}

