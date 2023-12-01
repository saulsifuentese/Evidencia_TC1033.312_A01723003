//
// Created by Sebastian Martinez on 24/11/23.
//

#ifndef TRIANGLE_TRIANGLE_H
#define TRIANGLE_TRIANGLE_H

#include <cstdio>
#include "Punto.h"


class Triangle {

private:
    Punto v1,v2,v3;

public:
    //Metodos constructores
    Triangle();
    Triangle(Punto _v1, Punto _v2, Punto _v3);

    //Setters
    void setVert1(Punto _v1);
    void setVert2(Punto _v2);
    void setVert3(Punto _v3);

    //Getters
    Punto getVert1();
    Punto getVert2();
    Punto getVert3();

    //Otros métodos
    double perimetro();
    double area();
    std::string str();

};


#endif //TRIANGLE_TRIANGLE_H
