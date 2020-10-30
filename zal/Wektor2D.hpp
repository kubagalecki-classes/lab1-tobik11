// class Wektor2D
// {
//     // Tutaj napisz implementacje klasy Wektor2D
// };


class Informer
{
public:
    Informer() { cout << "constructed" << endl; }
    ~Informer() { cout << "destructed" << endl; }
};

class Wektor2D
{
    double      x;
    double      y;
    Informer a;

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
};