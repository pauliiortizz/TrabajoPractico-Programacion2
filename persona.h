//PAULINA ORTIZ - Ingenieria en Sistemas - 2202058
// Created by BANGHO on 10/05/2023.
//

#ifndef PROYECTO_PERSONA_H
#define PROYECTO_PERSONA_H

#include <iostream>
#include "materia.h"

using namespace std;

//Clase Padre
class persona {
    //Atributos en comun entre docente y alumno
    string nombre;
    string apellido;
    string mail;
    int dni;

public:
    //Sets
    void setnombre(string Nombre);

    void setapellido(string Apellido);

    void setmail(string Mail);

    void setdni(int Dni);

    //Gets
    string getnombre();

    string getapellido();

    string getmail();

    int getdni();

    //Constructores

    //Constructor por default
    persona();

    //Constructor inicializado
    persona(string Nombre, string Apellido, string Mail, int Dni);

    //Funciones en comun
    void Modificacion_Datos(string Nombre, string Apellido, string Mail, int Dni);

    void Mostrar_Datos();
};

//Clase hija
class alumno : public persona {
    //Atributos correspondientes a alumno
    string carrera;
    int edad;
    materia Materia;
public:
    //Sets
    void setcarrera(string Carrera);

    void setedad(int Edad);

    //Gets
    string getcarrera();

    int getedad();

    //Constructores

    //Constructor por default
    alumno();

    //Constructor Inicializado
    alumno(string Nombre, string Apellido, string Mail, int Dni, string Carrera, int Edad);


    //Funciones
    void Modificar_datos(string Carrera, int Edad);

    void Inscripcion_Materia(string nombreMa, int codigo);

    void Cargar_nota(int notaM);

    void Mostrar_datos();
};


//Clase hija
class docente : public persona {

    //Atributo especifico de docente
    string titulo;
    materia Materia;

public:
    //Sets
    void settitulo(string Titulo);

    //Gets
    string gettitulo();

    //Constructores
    //Constructor por default
    docente();

    //Constructor Inicializado
    docente(string Nombre, string Apellido, string Mail, int Dni, string Titulo);

    //Funciones
    void Anotar_Materia(string nombreMa, int codigo);

    void Consulta_Materia();

    void ModificarDatos(string Titulo);

    void MostarDatos();

};


#endif //PROYECTO_PERSONA_H
