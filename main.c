#include <stdio.h>
#include <stdlib.h>


int main()
{
    printf(" _______________________________________\n");
    printf("|\t\t\t\t\t|\n");
    printf("|\t 1. kvadrat\t\t\t|\n");
    printf("|\t\t\t\t\t|\n");
    printf("|\t 2. pravokutnik\t\t\t|\n");
    printf("|\t\t\t\t\t|\n");
    printf("|\t 3. krug\t\t\t|\n");
    printf("|\t\t\t\t\t|\n");
    printf(" _______________________________________\n");


    int x;
    int a;
    int b;
    int c;
    int d;

    printf("unesi odabranu opciju\n");
    scanf("%d",&x);



    switch(x){
    case 1:
    printf("unesi stranicu kvadrata\n");
    scanf("%d",&a);
    int pk=a*a;
    printf("povrsina kvadrata je %d",pk);
    break;
    case 2:
    printf("unesi stranicu pravokutnika \n");
    scanf("%d",&b);
    printf("unesi stranicu pravokutnika\n");
    scanf("%d",&c);
    int pp=b*c;
    printf("povrsina pravokutnika je %d",pp);
    break;
    case 3:
      printf("unesi polumjer kruga\n");
    scanf("%d",&d);
    float p=(float)(d*d)*3.14;
    printf("povrsina kruga je %.2f",p);
    break;

    default:
        printf("nije dobar broj");
        break;
    }
}
