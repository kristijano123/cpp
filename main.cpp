#include <stdio.h>


int main()
{
  int n,m,s=0;
  printf ("unesi neki broj\n");
  scanf("%d",&n);
  while (n){
    m=m*10+n%10;
    n/=10;
    }
    while (m){
    scanf("%d",&n);
    s+=n*(m%10);
    m/=10;
    }
    printf("%d",s);

}
