#include "TXlib.h"
const COLORREF PIG_SKIN (RGB (242, 181, 181));
void DrawBackGround   ();
void DrawHouse        ();
void DrawPig          ();
void DrawSun          ();
void DrawBaloons      ();
void DrawEars         (int x, int y);
void DrawHeadArmsFeet (int x, int y);
void DrawBody         (int x, int y);
void DrawEyes         (int x, int y);
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
    int x = 300;
    int y = 400;
DrawEyes         (x, y);
DrawEars         (x, y);
DrawHeadArmsFeet (x, y);
DrawBody         (x, y);

}
void DrawEars      (int x, int y)
{
    txSetFillColor (PIG_SKIN);
    txSetColor     (PIG_SKIN);
    POINT ear [6]  {{x - 600 + 395, y - 400 + 300}, {x - 600 + 385, y - 400 + 270}, {x - 600 + 375, y - 400 + 275}, {x - 600 + 370, y - 400 + 285}, {x - 600 + 380, y - 400 + 280}, {x - 600 + 385, y - 400 + 300}};
    POINT earr[6]  {{x - 600 + 405, y - 400 + 300}, {x - 600 + 415, y - 400 + 270}, {x - 600 + 425, y - 400 + 275}, {x - 600 + 430, y - 400 + 285}, {x - 600 + 420, y - 400 + 280}, {x - 600 + 405, y - 400 + 300}};
    txPolygon      (ear , 6);
    txPolygon      (earr, 6);
}
void DrawHeadArmsFeet (int x, int y)
{
    txCircle       (x - 400 + 200, y - 400 + 300, 25);

    txSetColor     (PIG_SKIN);
    txSetFillColor (PIG_SKIN);
    txEllipse      (x - 600 + 405, y - 400 + 370, x - 600 + 415, y - 400 + 410);
    txEllipse      (x - 600 + 395, y - 400 + 370, x - 600 + 385, y - 400 + 410);
    txEllipse      (x - 600 + 405, y - 400 + 330, x - 600 + 435, y - 400 + 335);
    txEllipse      (x - 600 + 395, y - 400 + 330, x - 600 + 365, y - 400 + 335);
 }
void DrawBody      (int x, int y)
{
    txSetFillColor (RGB (91, 147, 249));
    txSetColor     (RGB (91, 147, 249));
    txCircle       (x - 600 + 200, y - 400 + 355, 30);
}
void DrawEyes      (int x, int y)
{
    txSetColor     (RGB (255, 255, 255));
    txSetFillColor (RGB (255, 255, 255));
    txCircle       (x - 600 + 192, y - 400 + 295, 5);
    txCircle       (x - 600 + 208, y - 400 + 295, 5);
    txSetFillColor (RGB (0, 0, 0));
    txCircle       (x - 600 + 208, y - 400 + 295, 4);
    txCircle       (x - 600 + 192, y - 400 + 295, 4);

    txSetColor     (RGB (0, 0, 0));
    txLine         (x - 600 + 395, y - 400 + 310, x - 600 + 405, y - 400 + 310);
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
