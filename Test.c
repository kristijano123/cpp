#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,k,b, count=0;
    int a1,a2,a3,a4,a5;
    printf("unesi broj zadataka\n");
    scanf("%d",&n);
    printf("unesi koliko zadataka zna\n");
    scanf("%d",&k);
    printf ("unesi zadatke koje je zadala profesorica\n");
    scanf("%d %d %d %d %d",&a1,&a2,&a3,&a4,&a5);
    while(k){
    scanf("%d",&b);
    if (b==a1)
        count++;
    if (b==a2)
        count++;
    if (b==a3)
        count++;
    if (b==a4)
        count++;
    if (b==a5)
        count++;
        k--;
    }
    if (count==0)
        printf("dobio je 1");
    if (count==1)
        printf("dobio je 1");
    if (count==2)
        printf("dobio je 2");
    if (count==3)
        printf("dobio je 3");
    if (count==4)
        printf("dobio je 4");
    if (count==5)
        printf("dobio je 5");


}

