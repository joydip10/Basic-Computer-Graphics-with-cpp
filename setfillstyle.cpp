#include<graphics.h>
#include<conio.h>
int main()
{
    int gd = DETECT,gm;
    initgraph(&gd,&gm," ");
    setfillstyle(HATCH_FILL,RED);
    circle(250,250,150);
    floodfill(250,250,WHITE);
    getch();
    closegraph();
}
