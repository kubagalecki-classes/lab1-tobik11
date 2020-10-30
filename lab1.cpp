#include <iostream>
#include <math.h>
using namespace std;

class Informer
{
public:
    Informer() { cout << "constructed" << endl; }
    ~Informer() { cout << "destructed" << endl; }
};

class Wektor2D
{
    int      x;
    int      y;
    Informer a;

public:
    Wektor2D(float nx, float ny)
    {
        x = nx;
        y = ny;
        cout << x << endl;
        cout << y << endl;
    }

    ~Wektor2D()
    {
        cout << x << endl;
        cout << y << endl;
    }

    float getX() { return x; }

    float getY() { return y; }

    float norm() { return sqrt(x * x + y * y); }

    void print() { cout << "x: " << x << "  y: " << y << endl; }
};

int main()
{
    puts("Hello, World!");
    Wektor2D w{3, 8};
    w.print();
    cout << w.norm() << endl;

    Wektor2D k{4, 8};
    Wektor2D l{5, 8};
    Wektor2D m{6, 8};
}
