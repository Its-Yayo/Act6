#pragma once
#include "point.h"

class Line {
    private:
        Punto V1;
        Punto V2;

    public:
        Line(Punto, Punto);

        void setV1(Punto);
        void setV2(Punto);

        Punto getV1();
        Punto getV2();

        double lenght();
};