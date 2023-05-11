//PAULINA ORTIZ - Ingenieria en Sistemas - 2202058

#include <iostream>
#include "persona.h"

using namespace std;


int main() {
    string NOMBRE, APELLIDO, TITULO, CARRERA, MAIL, MATERIA;
    int DNI, CODIGO, EDAD, NOTA;
    int opcion1, opcion2;

    cout << "Ingrese: " << endl;
    cout << "0 = Alumno" << endl;
    cout << "1 = Docente" << endl;
    cin >> opcion1;
    cout << endl;


    if (opcion1 == 0) {
        cout << "Bienvenido ALumno/a" << endl;
        cout << endl;

        //La opcion "Alta" del menu, inicia aqui.
        cout << "Nombre: ";
        cin >> NOMBRE;
        cout << endl;
        cout << "Apellido: ";
        cin >> APELLIDO;
        cout << endl;
        cout << "Mail: ";
        cin >> MAIL;
        cout << endl;
        cout << "Carrera: ";
        cin >> CARRERA;
        cout << endl;
        cout << "Dni: ";
        cin >> DNI;
        cout << endl;
        cout << "Edad: ";
        cin >> EDAD;
        cout << endl;

        //Creo el objeto
        alumno primerAlumno(NOMBRE, APELLIDO, MAIL, DNI, CARRERA, EDAD);


        while (opcion1 == 0) {

            //Menu ALUMNO
            cout << "---------------------- MENU ------------------------" << endl;
            cout << "\n";

            cout << "1. Inscribir a materia\n";
            cout << "2. Cargar Nota \n";
            cout << "3. Modificar Datos\n";
            cout << "4. Mostrar Datos\n";
            cout << "5. Salir";
            cout << endl;
            cin >> opcion2;

            switch (opcion2) {
                case 1:
                    cout << "Materia: ";
                    cin >> MATERIA;
                    cout << "Codigo: ";
                    cin >> CODIGO;
                    primerAlumno.Inscripcion_Materia(MATERIA, CODIGO);
                    cout << endl;
                    break;
                case 2:
                    cout << "Nota: ";
                    cin >> NOTA;
                    primerAlumno.Cargar_nota(NOTA);
                    cout << endl;
                    break;
                case 3:
                    cout << "Carrera: ";
                    cin >> CARRERA;
                    cout << "Edad: ";
                    cin >> EDAD;
                    primerAlumno.Modificar_datos(CARRERA, EDAD);
                    cout << endl;
                    break;
                case 4:
                    primerAlumno.Mostrar_datos();
                    break;
                case 5:
                    cout << "El software se cerrara. " << endl;
                    return 0;

            }
        }
    }

    if (opcion1 == 1) {
        cout << "Bienvenido Docente" << endl;
        cout << endl;

        //La opcion "Alta" del menu, inicia aqui.
        cout << "Nombre: ";
        cin >> NOMBRE;
        cout << endl;
        cout << "Apellido: ";
        cin >> APELLIDO;
        cout << endl;
        cout << "Mail: ";
        cin >> MAIL;
        cout << endl;
        cout << "Titulo: ";
        cin >> TITULO;
        cout << endl;
        cout << "Dni: ";
        cin >> DNI;
        cout << endl;

        //Creo el objeto
        docente Docente(NOMBRE, APELLIDO, MAIL, DNI, TITULO);


        while (opcion1 == 1) {

            //Menu DOCENTE
            cout << "---------------------- MENU ------------------------" << endl;
            cout << "\n";


            cout << "1. Anotar titular\n";
            cout << "2. Modificar Datos\n";
            cout << "3. Ver Datos\n";
            cout << "4. Salir";
            cout << endl;
            cin >> opcion2;

            switch (opcion2) {
                case 1:
                    cout << "Materia: ";
                    cin >> MATERIA;
                    cout << "Codigo: ";
                    cin >> CODIGO;
                    Docente.Anotar_Materia(MATERIA, CODIGO);
                    break;
                case 2:
                    cout << "Titulo: ";
                    cin >> TITULO;
                    Docente.ModificarDatos(TITULO);
                    break;
                case 3:
                    Docente.MostarDatos();
                    break;
                case 4:
                    cout << "El software se cerrara. " << endl;
                    return 0;
            }
        }
    }
}
