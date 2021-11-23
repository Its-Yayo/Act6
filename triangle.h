#include "point.h"

class Triangle {
    private:
        Punto v1;
        Punto v2;
        Punto v3;

    public:
        Triangle(double, double, double, double, double, double);

        Punto getV1();
        Punto getV2();
        Punto getV3();

        void setV1(Punto);
        void setV2(Punto);
        void setV3(Punto);

        double perimeter();
        double area();

};