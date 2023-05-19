#include <graphics.h>
#include <conio.h>
 
 
int main(){

	int gd=DETECT, gm;
	initgraph(&gd, &gm, "C:\\TC\\BGI");
	int v=0,x=0,y=0,c=0,d=0;
	char a;
do{
	a=getch();
	if(a=='+') v-=10;
	if(a=='-') v+=10;
	if(a=='a') x-=10;
	if(a=='w') y-=10;
	if(a=='d') x+=10;
	if(a=='s') y+=10;
	if(a=='6') d+=10;
	if(a=='4') c-=10;
	if(a=='8') d-=10;
	if(a=='2') c+=10;
	if(a=='r') v=0,x=0,y=0,c=0,d=0;
	
	cleardevice();
	line(550+x+c,700+y,750+x,700+y);
	line(550+x+c,700+y,700+x,650+y);
	line(750+x,700+y,900+x+d,650+y);
	line(700+x,650+y,900+x+d,650+y);
	line(550+x+c,700+y,750+x,300+v+y);//visina
	line(750+x,700+y,750+x,300+v+y);//visina
	line(700+x,650+y,750+x,300+v+y);//visna
	line(900+x+d,650+y,750+x,300+v+y);//visna
	
	}while (a!='q');
	closegraph();
	return 0;
	}		


