//
// Created by Sebastian Martinez on 24/11/23.
//

#ifndef TRIANGLE_PUNTO_H
#define TRIANGLE_PUNTO_H

#include <cstdio>
#include <string>
#include <cmath>

class Punto {

private:
    double x, y;

public:
    //Métodos
    Punto();

    Punto(double x1, double y1);

    //getter
    double getX();

    double getY();

    //setter
    void setX(double x1);

    void setY(double y1);



    //Método calcular distancia
    double calculaDist(Punto p2);
    std::string str();

};


#endif //TRIANGLE_PUNTO_H
