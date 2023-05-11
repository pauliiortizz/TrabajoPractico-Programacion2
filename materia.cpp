//PAULINA ORTIZ - Ingenieria en Sistemas - 2202058
// Created by BANGHO on 10/05/2023.
//

#include "materia.h"
#include <iostream>

using namespace std;

void materia::setnombreM(string nombreMa) {
    nombreM = nombreMa;
}

string materia::getnombreM() {
    return nombreM;
}

void materia::setcodigo(int codigoM) {
    codigo = codigoM;
}

int materia::getcodigo() {
    return codigo;
}

void materia::setnota(int notaM) {
    nota = notaM;
}

int materia::getnota() {
    return nota;
}

//Constructor por default
materia::materia() :
        nombreM{"Fisica"}, codigo{123}, nota{10} {};

//Constructor Inicializador
materia::materia(string nombreMa, int notaM, int codigoM) :
        nombreM{nombreMa}, nota{notaM}, codigo{codigoM} {};