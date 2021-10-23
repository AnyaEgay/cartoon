#include "TXlib.h"
void DrawBackGround ();
void DrawHouse      ();
void DrawPig        ();
void DrawSun        ();
int main ()
{


txCreateWindow (800, 600);

    DrawBackGround  ();

    DrawHouse       ();

    DrawPig         ();

    DrawSun         ();

return 0;
}
void DrawBackGround ()
{
    txSetColor     (RGB (0, 191, 255));
    txSetFillColor (RGB (0, 191, 255));
    txRectangle    (0, 0, 800, 600);

    txSetColor     (RGB (0, 128, 0));
    txSetFillColor (RGB (0, 128, 0));
    txRectangle    (0, 600, 800, 200);
}
void DrawHouse      ()
{
    int x= 550;
    int y= 400;

    txSetFillColor (RGB (255, 201, 14));
    txRectangle    (x-550+300, y-400+500, x-550+500, y-400+350);

    txSetColor     (RGB (208, 99, 47));
    txSetFillColor (RGB (208, 99, 47));
    txRectangle    (x-550+325, y-400+500, x-550+375, y-400+400);

    txSetColor     (RGB(255, 255, 255));
    txSetFillColor (RGB(0, 255, 255));
    txRectangle    (x-550+475, y-400+450, x-550+425, y-400+400);

    txLine         (x-550+450, y-400+450, x-550+450, y-400+400);
    txLine         (x-550+475, y-400+425, x-550+425, y-400+425);

    txSetColor     (RGB (255, 0, 0));
    txSetFillColor (RGB (255, 0, 0));
    POINT star[3]  {{x-550+300, y-400+350}, {x-550+500, y-400+350}, {x-550+400, y-400+300}};
    txPolygon      (star, 3);
}
void DrawPig        ()
{
    int x=600;
    int y=400;
    txSetFillColor (RGB (242, 181, 181));
    txSetColor     (RGB (242, 181, 181));
    txCircle       (x-400+200, y-400+300, 25);

    txSetFillColor (RGB (91, 147, 249));
    txSetColor     (RGB (91, 147, 249));
    txCircle       (x-400+200, y-400+355, 30);

    txSetColor     (RGB (242, 181, 181));
    txLine         (x-400+190, y-400+383, x-400+185, y-400+410);
    txLine         (x-400+210, y-400+383, x-400+215, y-400+410);
    txLine         (x-400+190, y-400+328, x-400+165, y-400+333);
    txLine         (x-400+210, y-400+328, x-400+245, y-400+333);

    txSetColor     (RGB (255, 255, 255));
    txSetFillColor (RGB (0, 0, 0));
    txCircle       (x-400+192, y-400+295, 5);
    txCircle       (x-400+208, y-400+295, 5);
}
void DrawSun       ()
{
    txSetFillColor (RGB (255, 208, 23));
    txSetColor     (RGB (255, 208, 23));
    txCircle       (60, 70, 50);
}
