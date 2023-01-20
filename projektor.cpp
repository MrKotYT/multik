#include "TXLib.h"

void A0telo (int x, int);

int main ()
    {
    txCreateWindow (1337, 542);
    txSetFillColor (TX_WHITE);
    txClear ();

    A0telo (630, 230);

    return 0;

    }

void A0telo (int x, int y)
    {
    txSetColor (TX_BLACK, 4);                                                                 //630,230
    txSetFillColor (RGB (255, 11, 11));
    POINT tIlo [8] = {{x - 118, y + 270,}, {x - 15, y}, {x + 15, y}, {x + 118, y + 270}, {x + 75, y + 270}, {x + 15, y + 124}, {x - 15, y + 124}, {x - 75, y + 270}};
    txPolygon (tIlo, 8);
    POINT rot [4] =  {{}, {}, {}, {}}
    txPolygon (rot , 4);
    }
