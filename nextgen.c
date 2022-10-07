#include <stdio.h>
#include <stdlib.h>

int nextgen(int a,int b,int x,int y){

return(a*b)<=(x*y);


}

int main()
{
    int a;
    int b;
    int x;
    int y;
    printf("unesi jedinicu energije");
    scanf("%d",&a);
      printf("unesi godine");
    scanf("%d",&b);
      printf("unesi grame");
    scanf("%d",&x);
      printf("unesi jedinicu energije grama helija");
    scanf("%d",&y);
    printf(nextgen(a,b,x,y)?"projekt moze napajati dovoljno":"projekt nemoze napajati dovoljno");
}
