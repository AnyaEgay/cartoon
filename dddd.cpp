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

void DrawHouse ()
{
    int x = 550;
    int y = 400;

    txSetFillColor (RGB (255, 201, 14));
    txRectangle    (x - 550 + 300, y - 400 + 500, x - 550 + 500, y - 400 + 350);

    txSetColor     (RGB (208, 99, 47));
    txSetFillColor (RGB (208, 99, 47));
    txRectangle    (x - 550 + 325, y - 400 + 500, x - 550 + 375, y - 400 + 400);

    txSetColor     (RGB(255, 255, 255));
    txSetFillColor (RGB(0, 255, 255));
    txRectangle    (x - 550 + 475, y - 400 + 450, x - 550 + 425, y - 400 + 400);

    txLine         (x - 550 + 450, y - 400 + 450, x - 550 + 450, y - 400 + 400);
    txLine         (x - 550 + 475, y - 400 + 425, x - 550 + 425, y - 400 + 425);

    txSetColor     (RGB (255, 0, 0));
    txSetFillColor (RGB (255, 0, 0));
    POINT star[3]  {{x - 550 + 300, y - 400 + 350}, {x - 550 + 500, y - 400 + 350}, {x - 550 + 400, y - 400 + 300}};
    txPolygon      (star, 3);
}

void DrawPig        ()
{
    int x=600;
    int y=400;

    const COLORREF PIG_SKIN (RGB (242, 181, 181));

    txSetFillColor (PIG_SKIN);
    txSetColor     (PIG_SKIN);
    POINT ear [6]  {{395, 300}, {385, 270}, {375, 275}, {370, 285}, {380, 280}, {385, 300}};
    POINT earr[6]  {{405, 300}, {415, 270}, {425, 275}, {430, 285}, {420, 280}, {405, 300}};
    txPolygon      (ear , 6);
    txPolygon      (earr, 6);

    txCircle       (x - 400 + 200, y - 400 + 300, 25);

    txSetColor     (PIG_SKIN);
    txSetFillColor (PIG_SKIN);
    txEllipse      (405, 370, 415, 410);
    txEllipse      (395, 370, 385, 410);
    txEllipse      (405, 330, 435, 335);
    txEllipse      (395, 330, 365, 335);


    txSetFillColor (RGB (91, 147, 249));
    txSetColor     (RGB (91, 147, 249));
    txCircle       (x - 400 + 200, y - 400 + 355, 30);

    txSetColor     (PIG_SKIN);
    txLine         (x - 400 + 190, y - 400 + 383, x - 400 + 185, y - 400 + 410);
    txLine         (x - 400 + 210, y - 400 + 383, x - 400 + 215, y - 400 + 410);
    txLine         (x - 400 + 190, y - 400 + 328, x - 400 + 165, y - 400 + 333);
    txLine         (x - 400 + 210, y - 400 + 328, x - 400 + 245, y - 400 + 333);

    txSetColor     (RGB (255, 255, 255));
    txSetFillColor (RGB (255, 255, 255));
    txCircle       (x - 400 + 192, y - 400 + 295, 5);
    txCircle       (x - 400 + 208, y - 400 + 295, 5);
    txSetFillColor (RGB (0, 0, 0));
    txCircle       (x - 400 + 208, y - 400 + 295, 4);
    txCircle       (x - 400 + 192, y - 400 + 295, 4);

    txSetColor     (RGB (0, 0, 0));
    txLine         (395, 310, 405, 310);
}
void DrawSun       ()
{
    txSetFillColor (RGB (255, 208, 23));
    txSetColor     (RGB (255, 208, 23));
    txCircle       (60, 70, 50);

    txLine         (120, 70 , 160, 70 );
    txLine         (60 , 130, 60 , 170);
    txLine         (105, 115, 135, 145);
    txLine         (15 , 115, 0  , 145);
    txLine         (105, 25 , 135, 0  );
    txLine         (60 , 10 , 60 , 0  );
    txLine         (15 , 25 , 0  , 0  );
}
