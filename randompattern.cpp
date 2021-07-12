#include<stdio.h>
#include<graphics.h>
int main()
{
 int gd=DETECT,gm;
 initgraph(&gd,&gm,"");

setfillstyle(2,GREEN);
bar(100,100,200,200);

 getch();
closegraph();

return 0;

}
