#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    int y;
    printf("unesi neku sekundu\n");
    scanf("%d",&x);
    printf("Unesi neku minutu\n");
    scanf("%d",&y);
    if(x>59){
            printf("nesipravan unos");
    }else{
    float a=(float)((float)x/60+y)/60;
    printf("sati je %.3f",a);
    }


}
