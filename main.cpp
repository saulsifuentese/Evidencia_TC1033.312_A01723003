#include <iostream>
#include "Triangle.h"
#include "Punto.h"
using namespace std;

void showTriangle(Triangle arrTriangle[], int iS){

    for (int i = 0; i < iS; i++){
        cout << i << ". " << arrTriangle[i].str() << endl;
    }
}

void readTriangle(Triangle arrTriangle[], int iS){
    double x_1, y_1, x_2, y_2, x_3, y_3;
    Punto punto;

    for(int i = 0; i < iS; i++){
        cout << "Ingresa las 3 cordenadas de x, y de los vértices del Trianglulo" << i << ':';
        cin >> x_1 >> y_1 >> x_2 >> y_2 >> x_3 >> y_3;

        punto.setX(x_1);
        punto.setY(y_1);

        cout << punto.str() << endl;
        arrTriangle[i].setVert1(punto);

        cout << punto.str() << endl;

        punto.setX(x_2);
        punto.setY(y_2);
        arrTriangle[i].setVert2(punto);

        punto.setX(x_3);
        punto.setY(y_3);
        arrTriangle[i].setVert3(punto);

    }
}

void calcularPer(Triangle arrTriangle[], int iS) {
    for (int i = 0; i < iS; i++) {
        cout << "Triangulo" << i << ".\nPerimetro =" << arrTriangle[i].perimetro() << ".\nArea = "
             << arrTriangle[i].area() << endl;
    }
}


// siempre inicia la ejecución del programa en la
int main() {

    Punto p1{-5, -5}, p2{1, 33}, p3{4, -6};
    Punto p4{-2, -3}, p5{5, -4}, p6{-1, 3};
    Punto p7{-2, -3}, p8{5, -4}, p9{-1, 3};
    Triangle tri1{p4, p5, p6}, tri2{p1, p2, p3}, tri3{p7, p8, p9};
    string nombre;
    int edad;

// Declaración del arreglo de Triangulos
// Nota: se inicializan por default con el Constructor Default
    Triangle arrT[100];

// Llamar a la función desplegarArregloTriangulo
    showTriangle(arrT, 100);
    readTriangle(arrT, 2);
    showTriangle(arrT, 5);
    readTriangle(arrT, 5);

// Ejemplo del método getline( ) y cin.ignore( )
    for (int alumnos = 1; alumnos < 4; alumnos++) {
        cout << "Ingresa tu nombre:";
        getline(cin, nombre);
        cout << nombre << endl;
        cout << "Ingresa tu edad:";
        cin >> edad;
        cin.ignore();
    }
    return 0;

}




