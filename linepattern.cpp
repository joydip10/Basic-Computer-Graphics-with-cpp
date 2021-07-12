#include<stdio.h>
#include<graphics.h>
int main()
{
 int gd=DETECT,gm,i,x1,y1,x2,y2;
 initgraph(&gd,&gm,"");
 x1=30,y1=50,x2=70,y2=100;
for(i=1;i<=8;i++)
{
setfillstyle(i,i);
bar(x1,y1,x2,y2);
x1=x1+50;
x2=x2+50;
y1=y1+50;
y2=y2+50;
}
 getch();
closegraph();

return 0;

}


