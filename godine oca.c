#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    int s;
    printf("unesi godine tate\n");
    scanf("%d",&t);
    printf("unesi godine sina\n");
    scanf("%d",&s);
    int x=t-(2*s);
    printf("godine oca ce biti duplo vece za\n%d kn",x);
    return 0;
}
