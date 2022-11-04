#include<stdio.h>

struct Point{
    int x;
    int y;
    int width;
    int height;
};

int main() {
    struct Point p1, p2;
    p1.x = 10;
    p1.y = 10;
    p1.width = 10;
    p1.height = 10;

    p2.x = p1.x + p1.width * 3;
    p2.y = p1.y + p1.height * 2;
    p2.width = p1.width * 2;
    p2.height = p1.height * 2;

    printf("%d\n", p2.width * p1.x - p1.width * p2.y);
    return 0;
}