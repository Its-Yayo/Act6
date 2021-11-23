#pragma once

class Punto {
    private:
        double x;
        double y;
    
    public:
        Punto(double x, double y);
        Punto();

        double getX();
        double getY();

        void setX(double);
        void setY(double);
        double distance(Punto); 

};