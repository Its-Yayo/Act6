#include "triangle.h"
#include <tgmath.h>

Triangle::Triangle(double x1, double y1, double x2, double y2, double x3, double y3)
: v1(Punto(x1, y1)), v2(Punto(x2, y2)), v3(Punto(x3, y3)) {};

Punto Triangle::getV1() {return v1;};
Punto Triangle::getV2() {return v2;};
Punto Triangle::getV3() {return v3;};

void Triangle::setV1(Punto p) {v1 = p;};
void Triangle::setV2(Punto p) {v2 = p;};
void Triangle::setV3(Punto p) {v3 = p;};

double Triangle::perimeter(){
    double total = 0;

    total += v1.distance(v2);
    total += v2.distance(v3);
    total += v3.distance(v1);

    return total;
};

double Triangle::area(){
    double perimetro = perimeter();
    double s = perimetro / 2;

    return pow( 
        s * (s - v1.distance(v2)) * (s - v2.distance(v3)) * (s - v3.distance(v1)) ,0.5);
};