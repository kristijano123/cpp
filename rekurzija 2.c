#include <stdio.h>
#include <stdlib.h>
int rekurzija(int a,int n){

return n==1?a:rekurzija(a+3,--n);

}
int main()
{
    int n;
    printf("unesi neki broj");
    scanf("%d",&n);
    printf("%d",rekurzija(1,n));
}
