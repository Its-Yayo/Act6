#include "line.h"
#include "point.h"


Line::Line(Punto p1, Punto p2): V1(p1), V2(p2) {};

void Line::setV1(Punto p) {
    V1 = p;
};

void Line::setV2(Punto p){
    V2 = p;
};

Punto Line::getV1(){return V1;};
Punto Line::getV2(){return V2;};

double Line::lenght()  {
    return V1.distance(V2);
};