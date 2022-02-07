#include<iostream>
#include<graphics.h>
using namespace std;
int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"c\\tc\\bgi");
    circle(400,300,150);
    getch();
    closegraph();
    return 0;
}
