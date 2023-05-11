//PAULINA ORTIZ - Ingenieria en Sistemas - 2202058
// Created by BANGHO on 10/05/2023.
//

#ifndef PROYECTO_MATERIA_H
#define PROYECTO_MATERIA_H

#include <iostream>

using namespace std;

class materia {
    //Atributos
    string nombreM;
    int nota;
    int codigo;

public:
    //Sets
    void setnombreM(string nombreMa);

    void setnota(int notaM);

    void setcodigo(int codigoM);

    //Gets
    string getnombreM();

    int getnota();

    int getcodigo();

    //Constructores
    //Constructor por default
    materia();

    //Constructor Inicializador
    materia(string nombreMa, int notaM, int codigoM);

};


#endif //PROYECTO_MATERIA_H
