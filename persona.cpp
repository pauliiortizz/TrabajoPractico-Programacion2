//PAULINA ORTIZ - Ingenieria en Sistemas - 2202058
// Created by BANGHO on 10/05/2023.
//

#include "persona.h"
#include "materia.h"
#include <iostream>

using namespace std;

//clase padre
void persona::setnombre(string Nombre) {
    nombre = Nombre;
}

string persona::getnombre() {
    return nombre;
}

void persona::setapellido(string Apellido) {
    apellido = Apellido;
}

string persona::getapellido() {
    return apellido;
}

void persona::setmail(string Mail) {
    mail = Mail;
}

string persona::getmail() {
    return mail;
}

void persona::setdni(int Dni) {
    dni = Dni;
}

int persona::getdni() {
    return dni;
}

//Constructor por default
persona::persona() :
        nombre{"Paulina"}, apellido{"Ortiz"}, mail{"pauortiz@gmail.com"}, dni{00000000} {};

//Constructor Inicializado
persona::persona(string Nombre, string Apellido, string Mail, int Dni) :
        nombre{Nombre}, apellido{Apellido}, mail{Mail}, dni{Dni} {};

//Funciones
void persona::Modificacion_Datos(string Nombre, string Apellido, string Mail, int Dni) {
    setnombre(Nombre);
    setapellido(Apellido);
    setmail(Mail);
    setdni(Dni);
}

void persona::Mostrar_Datos() {
    cout << "Nombre: " << getnombre() << endl;
    cout << "Apellido: " << getapellido() << endl;
    cout << "Mail: " << getmail() << endl;
    cout << "DNI: " << getdni() << endl;
}


//CLASE HIJA ALUMNO
void alumno::setcarrera(string Carrera) {
    carrera = Carrera;
}

string alumno::getcarrera() {
    return carrera;
}

void alumno::setedad(int Edad) {
    edad = Edad;
}

int alumno::getedad() {
    return edad;
}

//Constructor por default
alumno::alumno() :
        carrera{"Ingenieria"}, edad{18} {};

//Constructor Inicializado
alumno::alumno(string Nombre, string Apellido, string Mail, int Dni, string Carrera, int Edad)
        : persona(Nombre, Apellido, Mail, Dni) { carrera = Carrera, edad = Edad; }


//Funciones
void alumno::Inscripcion_Materia(string nombreMa, int codigo) {
    Materia.setnombreM(nombreMa);
    Materia.setcodigo(codigo);
}

void alumno::Cargar_nota(int notaM) {
    Materia.setnota(notaM);
}

void alumno::Modificar_datos(string Carrera, int Edad) {
    setcarrera(Carrera);
    setedad(Edad);
}

void alumno::Mostrar_datos() {
    cout << "Edad: " << getedad() << endl;
    cout << "Carrera: " << getcarrera() << endl;
    cout << "Materia: " << Materia.getnombreM() << endl;
    cout << "Codigo: " << Materia.getcodigo() << endl;
    cout << "Nota: " << Materia.getnota() << endl;
}


//CLASE HIJA DOCENTE
void docente::settitulo(string Titulo) {
    titulo = Titulo;
}

string docente::gettitulo() {
    return titulo;
}

//Constructor por default
docente::docente() :
        titulo{"Ingeniero"} {};

//Constructor Inicializador
docente::docente(string Nombre, string Apellido, string Mail, int Dni, string Titulo) :
        persona(Nombre, Apellido, Mail, Dni) { titulo = Titulo; }


//Funciones

void docente::Anotar_Materia(string nombreMa, int codigo) {
    Materia.setnombreM(nombreMa);
    Materia.setcodigo(codigo);
}

void docente::Consulta_Materia() {
    cout << "Materia: " << Materia.getnombreM() << endl;
    cout << "Docente: " << getnombre() << " " << getapellido() << endl;
}

void docente::ModificarDatos(string Titulo) {
    settitulo(Titulo);
}

void docente::MostarDatos() {
    cout << "Nombre: " << getnombre() << endl;
    cout << "Apellido: " << getapellido() << endl;
    cout << "Titulo: " << gettitulo() << endl;
    cout << "Mail: " << getmail() << endl;
    cout << "Dni: " << getdni() << endl;
}



