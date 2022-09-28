#include <stdio.h>
int sum(int a)
{
    return a==1?1:a+sum(a-1);
}
int main()
{
    int a;
    printf("unesi neki broj");
    scanf("%d",&a);

    printf("%d",sum(a));


}
