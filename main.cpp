/*

Ramòn Habib Zavala Rivas (A01641328)
Luis Fernando De Leòn Silva (A01754574)

23-11-21

*/

#include "point.h"
#include "line.h"
#include "stdio.h"
#include "triangle.h"

int main()  {
    Punto p2 = Punto(4, 5);
    Punto p1 =Punto(1,1);
    Line linea = Line(p2, p1);

    printf("%2.2lf\n", linea.lenght());

    Triangle triangulo = Triangle(0,0, 50, 30,25,10);

    printf("%.2lf\n", triangulo.perimeter());
    printf("%.2lf\n", triangulo.area());

};