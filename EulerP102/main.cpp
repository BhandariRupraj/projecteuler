#include <iostream>
#include <fstream>
#include <cmath>

struct point
{
    int x, y;
};

double area(point &a, point &b, point &c)
{
    return (0.5 * abs ((a.x - c.x)*(b.y - c.y) -
                       (a.y - c.y)*(b.x - c.x)));
}

bool validate(point &a, point &b, point &c, point &o)
{
    return ((area(o, b, c) + area(o, a, c) +
             area(o, a, b)) <= area(a, b, c));
}

int main(int argc, char **argv)
{
    point a, b, c, origin = {0, 0};
    char ch;
    int cnt = 0;
    std::ifstream tri("C:/Users/s521059/CLionProjects/Euler Project/EulerP102/p102_triangles.txt");
    while(tri) {
        tri >> a.x >> ch >> a.y >> ch >> b.x >> ch >>
            b.y >> ch >> c.x >> ch >> c.y;
        if(validate(a, b, c, origin))
            cnt++;
    }
    std::cout << cnt << std::endl;
    return 0;
}