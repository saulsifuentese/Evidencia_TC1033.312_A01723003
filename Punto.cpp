//
// Created by Sebastian Martinez on 24/11/23.
//

#include "Punto.h"

Punto::Punto(){
    x = 0;
    y = 0;
}

Punto::Punto(double x1, double y1){
    x = x1;
    y = y1;
}
//Getters
double Punto::getX(){
    return x;
}
double Punto::getY(){
    return y;
}

//Setters
void Punto::setX(double x1){
    x = x1;
}
void Punto::setY(double y1){
    y = y1;
}

double Punto::calculaDist(Punto p2){
    return sqrt( (p2.x - x) * (p2.x - x) + (p2.y - y) * (p2.y - y) );
}

std::string Punto::str() {
    return '(' + std::to_string(x) + ',' + std::to_string(y) + ")";
}
