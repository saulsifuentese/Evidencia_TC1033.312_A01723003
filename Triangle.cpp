//
// Created by Sebastian Martinez on 24/11/23.
//
#include "Triangle.h"

Triangle::Triangle() {
    v1 = Punto(0,0);
    v2 = Punto(50,30);
    v3 = Punto(25,10);
}

Triangle::Triangle(Punto _v1, Punto _v2, Punto _v3) {
    v1 = _v1;
    v2 = _v2;
    v3 = _v3;
}
void Triangle::setVert1(Punto _v1) {
    v1 = _v1;
}
void Triangle::setVert2(Punto _v2) {
    v2 = _v2;
}
void Triangle::setVert3(Punto _v3) {
    v3 = _v3;
}

Punto Triangle::getVert1() {
    return v1;
}
Punto Triangle::getVert2() {
    return v2;
}
Punto Triangle::getVert3() {
    return v3;
}

double Triangle::perimetro() {
    return v1.calculaDist(v1) + v2.calculaDist(v2) + v3.calculaDist(v3);
}

double Triangle::area() {
    return 1.0/2 * abs(((v1.getX() * v2.getY()) + (v2.getX() * v3.getY()) + (v3.getX() * v1.getY())) -
                        ((v1.getX()) * v3.getY()) + (v3.getX() * v2.getY()) + (v2.getX() * v1.getY()));
}
std::string Triangle::str() {
    return v1.str() + ',' + v2.str() + ',' + v3.str();
}
