// class Wektor2D
// {
//     // Tutaj napisz implementacje klasy Wektor2D
// };
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

public:

    Wektor2D(){ x = 0; y = 0;}


    Wektor2D(double nx, double ny)
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

    void setX(double nx) {  x = nx; }

    void setY(double ny) {  y = ny; }

    double getX() { return x; }

    double getY() { return y; }

    double norm() { return sqrt(x * x + y * y); }

    void print() { cout << "x: " << x << "  y: " << y << endl; }


    private:
    double      x;
    double      y;
    Informer a;
};

Wektor2D operator+(Wektor2D a, Wektor2D b)
{
  Wektor2D c(a.getX()+b.getX(), a.getY()+b.getY());
  return c;
}

double operator*(Wektor2D a, Wektor2D b)
{
  return a.getX()*b.getX(), a.getY()*b.getY();
}