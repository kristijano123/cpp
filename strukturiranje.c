#include <stdio.h>
#include <stdlib.h>
struct ucenici{
    int godiste;
    int bodovi;
    char  oib[11];
    char prezime[20];
};
int main()
{
    int sum=0;
    int i;
    struct ucenici uc[20]={
    2042, 15, "01439549329", "klutos",
    1967, 17, "01439549329", "kulusic",
    1953, 18, "01439549329", "ivic",
    1968, 19, "01439549329", "markovic",
    2024, 4, "01439549329", "lukic",
    1933, 7, "01439549329", "petkovic",
    2022, 14, "01439549329", "lazic",
    2007, 9, "01439549329", "krpan",
    2042, 20, "01439549329", "masic",
    1967, 6, "01439549329", "jankovic",
    1953, 13, "01439549329", "maric",
    1968, 2, "01439549329", "modric",
    2024, 22, "01439549329", "peric",
    1933, 21, "01439549329", "mamic",
    2022, 11, "01439549329", "stazic",
    2007, 10, "01439549329", "matosevic",
    2042, 3, "01439549329", "balunovic",
    1967, 24, "01439549329", "akmacic",
    1953, 25, "01439549329", "kolic",
    1968, 27, "01439549329", "gvardiol",

    };

    for(i=0;i<20;i++)
        sum+=uc[i].bodovi;

int avg= sum/20;
 for(i=0;i<20;i++)
if (uc[i].bodovi>avg){
    printf("%d \t %s\n",uc[i].bodovi,uc[i].prezime);
}
else{
    printf("ne\n");
}




}
