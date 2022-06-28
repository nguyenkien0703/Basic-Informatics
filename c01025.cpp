
#include <stdio.h>
int main()
{
    int x1, x2, x3, x4, y1, y2, y3, y4, minX, minY, maxX, maxY, ngang, doc;
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
    scanf("%d %d %d %d", &x3, &y3, &x4, &y4);
    maxX = x2 >= x4 ? x2 : x4;
    maxY = y2 >= y4 ? y2 : y4;
    minX = x1 <= x3 ? x1 : x3;
    minY = y1 <= y3 ? y1 : y3;
    ngang = maxX - minX;
    doc = maxY - minY;
    if (ngang >= doc)
        printf("%d", ngang * ngang);
    else
        printf("%d", doc * doc);
}