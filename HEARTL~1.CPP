/*___________ WELCOME ALL OF YOU ON ROHIT TECH STUDY CHANNEL ______________*/
/*................... C++ PROGRAM TO DRAW HEART LOVE ......................*/

#include<stdio.h>
#include<conio.h>
#include <graphics.h>
#include <dos.h>
void main()
{

int gd=DETECT,gm,i,j=0,k=4;
initgraph(&gd,&gm,"c:\\TC\\BGI");

//____DRAW HEART

for(i=0;i<=80;i=i+4)
{
setcolor(12);

outtextxy(300-i,300-i,".");
outtextxy(300+i,300-i,".");
delay(100);
}

for(i=0;i<=40;i=i+4)
{
setcolor(10);
outtextxy(220,220-i,".");
outtextxy(380,220-i,".");
delay(100);
}

for(i=0;i<=20;i=i+4)
{
setcolor(4);
outtextxy(220+i,180-i,".");
outtextxy(380-i,180-i,".");
delay(100);
}

for(i=0;i<=20;i=i+4)
{

outtextxy(240+i,160,".");
outtextxy(360-i,160,".");
delay(100);
}

for(i=0;i<=40;i=i+4)
{

outtextxy(260+i,160+i,".");
outtextxy(340-i,160+i,".");
delay(100);
}

//_____DRAW ARROW

for(i=0;i<=250;i=i+4)
{
setcolor(14);

outtextxy(210+i,350-i,".");
delay(100);
}

for(i=0;i<=20;i=i+6,j=j+2,k=k+6)
{
setcolor(11);
outtextxy(460-i,100-j,".");
outtextxy(460-j,100+k,".");
}

//____DRAW I

for(i=10;i<=50;i=i+4)
{
setcolor(10);
outtextxy(90,350+i,".");
delay(100);
}

//______DRAW L

for(i=10;i<=50;i=i+4)
{
setcolor(13);
outtextxy(190,350+i,".");
delay(100);
}

for(i=0;i<=50;i=i+4)
{

outtextxy(190+i,400,".");
delay(100);
}

//___DRAW O

setcolor(12);
for(i=0;i<=50;i=i+4)
{

outtextxy(250+i,353,".");
delay(100);
}

for(i=10;i<=50;i=i+4)
{
outtextxy(250,350+i,".");
delay(100);
}

for(i=0;i<=50;i=i+4)
{

outtextxy(250+i,400,".");
delay(100);
}

for(i=0;i<48;i=i+4)
{

outtextxy(300,400-i,".");
delay(100);
}

//_____DRAW V

for(i=0;i<48;i=i+4)
{
setcolor(15);
outtextxy(350-i,400-i,".");
outtextxy(350+i,400-i,".");
delay(100);
}

//______DRAW E

setcolor(14);
for(i=0;i<=50;i=i+4)
{

outtextxy(400+i,353,".");
delay(100);
}

for(i=10;i<=50;i=i+4)
{
outtextxy(400,350+i,".");
delay(100);
}

for(i=0;i<=50;i=i+4)
{

outtextxy(400+i,375,".");
delay(100);
}

for(i=0;i<=50;i=i+4)
{

outtextxy(400+i,400,".");
delay(100);
}


//______DRAW U

for(i=10;i<=50;i=i+4)
{
setcolor(13);
outtextxy(500,350+i,".");
delay(100);
}

for(i=0;i<=50;i=i+4)
{

outtextxy(500+i,400,".");
delay(100);
}

for(i=0;i<48;i=i+4)
{

outtextxy(550,400-i,".");
delay(100);
}

cleardevice();

setcolor(10);
settextstyle(1,HORIZ_DIR,5);
outtextxy(100,200," ROHIT TECH STUDY ");

setcolor(11);
settextstyle(2,0,9);
outtextxy(220,300,"LOVE U ALL");

getch();
closegraph();
}


/***************** I HOPE YOU LIKE THIS PROGRAMMING ************************/

/*____________ LIKE ___________ SHARE ______________ SUBSCRIBE ___________*/


