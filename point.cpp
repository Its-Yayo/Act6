#include "point.h"
#include <tgmath.h>

using namespace std;

Punto::Punto() : x(0), y(0) {};

Punto::Punto(double x, double y):
    x(x), y(y)
{};

void Punto::setX(double x_) {x = x_;};
void Punto::setY(double y_) {y = y_;};

double Punto::getX() {return x;};
double Punto::getY() {return y;};


double Punto::distance(Punto point) {
    return pow( pow(x - point.x, 2) + pow(y - point.y, 2) , 0.5  );
}
