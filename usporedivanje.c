#include <stdio.h>
#include <stdlib.h>
void nes(int a,int b,int n,int *jeli,float *ab){
    if (n>0){
    if(a>b){
        *jeli=1;
    *ab=a*b;
    }
    else if (a<b){
        *jeli=-1;
        *ab=(float)a/b;
    }
    else{
        *jeli=0;
        *ab=(float)a/b;
    }
    }
    else if(n==0){
        *jeli =0;
	  *ab = (float)a/b;
	  }
    else{
    if(a>b){
        *jeli=-1;
    *ab=(float)a/b;
    }
    else if (a<b){
        *jeli=1;
        *ab=a*b;
    }
    else{
        *jeli=0;
        *ab=a*b;
        }

}
}

int main()
{
    int a;
    int b;
    int n;
    int jeli;
    float ab;
    printf("unesi broj\n");
    scanf("%d",&a);
     printf("unesi broj\n");
    scanf("%d",&b);
     printf("unesi broj\n");
    scanf("%d",&n);
    nes(a,b,n,&jeli,&ab);
    printf("%d\n", jeli);
    printf("%.2f\n", ab);
}



