#include <stdio.h>
#include <conio.h>
#include <cstdlib>
#include <time.h>
#include <iostream>
#include <cstdio>
#include<sstream>

using namespace std;

//Variables globales
//Docentes: nombre completo | cedula | programa | numero estudiantes
string docentes [100][4];
//Estudiantes: nombre completo | codigo | programa | semestre actual | estado academico | consejero
string estudiantes [100][6];
//Consejeria: nombre completo | codigo | Docente consejero | Situacion academica | Situacion emocional
string consejerias [100][5];

//Funcion Registrar Docentes consejeros
void RegistrarDocentesConsejeros(){
    string nombre;
    string apellido;
    string cedula;
    string programa;
    int numeroEstudiantes;

    cout << "Ingresa nombre: ";
    cin >> nombre;

    cout << "Ingresa apellido: ";
    cin >> apellido;

    cout << "Ingresa numero cedula: ";
    cin >> cedula;

    cout << "Ingresa el programa al que perteneces (Electrónica, Sistemas, Multimedia, Industrial o Agroindustrial): ";
    cin >> programa;

    while(true){
        cout << "Ingresa numero de estudiantes a cargo:";
        cin >> numeroEstudiantes;
        if(numeroEstudiantes < 10){
            break;
        }
        else{
           cout << "\nNúmero de estudiantes no es posible\n";
        }
    }

    for (int i = 0; i < 100; i++){
        if(docentes[i][1] == ""){
            docentes[i][0] = nombre +" "+ apellido;
            docentes[i][1] = cedula;
            docentes[i][2] = programa;
            stringstream ss;
            ss<<numeroEstudiantes;
            string s;
            ss>>s;
            docentes[i][3] = s;
            break;
        }
    }

    cout << "\nConfirmar registro\n";
    getch();

}
//Funcion Registrar Estudiante
void RegistrarEstudiante(){
    string nombre;
    string apellido;
    string codigo;
    string programa;
    string semestre;
    string estadoAcademico;
    string docente_nombre;
    string docente_apellido;

    cout << "Ingresa nombre: ";
    cin >> nombre;

    cout << "Ingresa apellido: ";
    cin >> apellido;

    cout << "Ingresa su codigo: ";
    cin >> codigo;

    cout << "Ingresa el programa al que perteneces (Electrónica, Sistemas, Multimedia, Industrial o Agroindustrial): ";
    cin >> programa;

    cout << "Ingresa semestre actual: ";
    cin >> semestre;

    while (true){
       cout << "Ingresa estado academico (Regular/Prueba): ";
        cin >> estadoAcademico;
        if(estadoAcademico == "prueba" || estadoAcademico == "Prueba" || estadoAcademico == "Regular" || estadoAcademico == "regular"){
            break;
        }
        else{
            cout << "Solo puedes ingresar Regular/Prueba\n";
        }
    }

    cout << "Ingresa consejero (Docente a cargo)\n";
    cout << "Ingresa Nombre del consejero: ";
    cin >> docente_nombre;
    cout << "Ingresa apellido del consejero: ";
    cin >> docente_apellido;

     for (int i = 0; i < 100; i++){
        if(estudiantes[i][1] == ""){
            estudiantes[i][0] = nombre +" "+ apellido;
            estudiantes[i][1] = codigo;
            estudiantes[i][2] = programa;
            estudiantes[i][3] = semestre;
            estudiantes[i][4] = estadoAcademico;
            estudiantes[i][5] = docente_nombre + " " + docente_apellido;
            break;
        }
    }

    cout << "\nConfirmar registro\n";
    getch();

}
//Funcion que muestra mensaje de alerta y datos del estudiante
void MostrarMensajeAlertaEstudiante(){
 for(int i = 0; i < 80; i++){
        cout << "*" << "";
    }
    cout << "" << "\n";
    cout << "¡Alerta! El estudiante se debe remitir al programa de orientacion estudiantil.\nPor favor, enviar un correo electrónico al decano con la información del estudiante\n";
    for(int i = 0; i < 80; i++){
        cout << "*" << "";
    }
        cout << "" << "\n";
}
//funcion que imprime el menu para generar reportes
void ImprimirMenuReportes(){
  for(int i = 0; i < 90; i++){
        cout << "*" << "";
    }
    cout << "" << "\n";

    for(int i = 0; i < 90; i++){
        if( i == 0 || i == 89){
            cout << "*" << "";
        }
        if(i == 10){
            cout << "Por favor, seleccione una de estas opciones:" << "";
        }
        if(i != 0 && (i < 3 || i > 45) && i != 49){
            cout << " " << "";
        }
    }
    cout << "" << "\n";

    for(int i = 0; i < 90; i++){
        if( i == 0 || i == 89){
            cout << "*" << "";
        }
        if(i == 10){
            cout << "1. Generar reporte por codigo de estudiante" << "";
        }
        if(i != 0 && (i < 10 || i > 52) && i != 89){
            cout << " " << "";
        }
    }
    cout << "" << "\n";

    for(int i = 0; i < 90; i++){
        if( i == 0 || i == 89){
            cout << "*" << "";
        }
        if(i == 10){
            cout << "2. Buscar docente" << "";
        }
        if(i != 0 && (i < 10 || i > 26) && i != 89){
            cout << " " << "";
        }
    }
    cout << "" << "\n";

    for(int i = 0; i < 90; i++){
        if( i == 0 || i == 89){
            cout << "*" << "";
        }
        if(i == 10){
            cout << "3. Listar estudiantes de acuerdo a estado (prueba/regular)" << "";
        }
        if(i != 0 && (i < 10 || i > 67) && i != 89){
            cout << " " << "";
        }
    }
    cout << "" << "\n";

    for(int i = 0; i < 90; i++){
        if( i == 0 || i == 89){
            cout << "*" << "";
        }
        if(i == 10){
            cout << "4. Listar estudiantes de acuerdo a situacion academica (buena/regular/baja)" << "";
        }
        if(i != 0 && (i < 10 || i > 84) && i != 89){
            cout << " " << "";
        }
    }
    cout << "" << "\n";

    for(int i = 0; i < 90; i++){
        if( i == 0 || i == 89){
            cout << "*" << "";
        }
        if(i == 10){
            cout << "5. Listar estudiantes de acuerdo a situacion motivacional (animado/orientacion)" << "";
        }
        if(i != 0 && (i < 10 || i > 90) && i != 89){
            cout << " " << "";
        }
    }
    cout << "" << "\n";

    for(int i = 0; i < 90; i++){
        if( i == 0 || i == 89){
            cout << "*" << "";
        }
        if(i == 10){
            cout << "6. Listar estudiantes por consejero asignado" << "";
        }
        if(i != 0 && (i < 10 || i > 53) && i != 89){
            cout << " " << "";
        }
    }
    cout << "" << "\n";

    for(int i = 0; i < 90; i++){
        if( i == 0 || i == 89){
            cout << "*" << "";
        }
        if(i == 10){
            cout << "7. Salir" << "";
        }
        if(i != 0 && (i < 10 || i > 16) && i != 49){
            cout << " " << "";
        }
    }
    cout << "" << "\n";



    for(int i = 0; i < 90; i++){
        cout << "*" << "";
    }
    cout << "" << "\n";
    cout << "Ingresa tu opcion: " << "";
}
//funcion que imprime el menu para modificar datos
void ImprimirMenuModificacion(){
     for(int i = 0; i < 60; i++){
        cout << "*" << "";
    }
    cout << "" << "\n";

    for(int i = 0; i < 60; i++){
        if( i == 0 || i == 59){
            cout << "*" << "";
        }
        if(i == 10){
            cout << "Por favor, seleccione una de estas opciones:" << "";
        }
        if(i != 0 && (i < 3 || i > 45) && i != 49){
            cout << " " << "";
        }
    }
    cout << "" << "\n";

    for(int i = 0; i < 60; i++){
        if( i == 0 || i == 59){
            cout << "*" << "";
        }
        if(i == 10){
            cout << "1. Modificar datos por codigo estudiantil" << "";
        }
        if(i != 0 && (i < 10 || i > 50) && i != 89){
            cout << " " << "";
        }
    }
    cout << "" << "\n";

    for(int i = 0; i < 60; i++){
        if( i == 0 || i == 59){
            cout << "*" << "";
        }
        if(i == 10){
            cout << "2. Eliminar estudiante" << "";
        }
        if(i != 0 && (i < 10 || i > 31) && i != 89){
            cout << " " << "";
        }
    }
    cout << "" << "\n";

    for(int i = 0; i < 60; i++){
        if( i == 0 || i == 59){
            cout << "*" << "";
        }
        if(i == 10){
            cout << "3. Salir" << "";
        }
        if(i != 0 && (i < 10 || i > 16) && i != 49){
            cout << " " << "";
        }
    }
    cout << "" << "\n";



    for(int i = 0; i < 60; i++){
        cout << "*" << "";
    }
    cout << "" << "\n";
    cout << "Ingresa tu opcion: " << "";

}
//funcion que imprime el menu principal
void ImprimirMenuPrincipal(){
    for(int i = 0; i < 60; i++){
        cout << "*" << "";
    }
    cout << "" << "\n";

    for(int i = 0; i < 60; i++){
        if( i == 0 || i == 59){
            cout << "*" << "";
        }else{
            cout << "-" << "";
        }

    }
    cout << "" << "\n";

    for(int i = 0; i < 60; i++){
        if( i == 0 || i == 59){
            cout << "*" << "";
        }
        if(i == 10){
            cout << "|| BIENVENIDO AL PROGRAMA DE ADVISING INGENIERIA ||" << "";
        }
        if(i != 0 && (i < 4 || i > 54) && i != 59){
            cout << " " << "";
        }
    }
    cout << "" << "\n";

    for(int i = 0; i < 60; i++){
        if( i == 0 || i == 59){
            cout << "*" << "";
        }else{
            cout << "-" << "";
        }
    }
    cout << "" << "\n";

    for(int i = 0; i < 60; i++){
        if( i == 0 || i == 59){
            cout << "*" << "";
        }
        if(i == 10){
            cout << "Por favor, seleccione una de estas opciones:" << "";
        }
        if(i != 0 && (i < 3 || i > 45) && i != 49){
            cout << " " << "";
        }
    }
    cout << "" << "\n";

    for(int i = 0; i < 60; i++){
        if( i == 0 || i == 59){
            cout << "*" << "";
        }
        if(i == 10){
            cout << "1. Registrar estudiantes" << "";
        }
        if(i != 0 && (i < 10 || i > 32) && i != 49){
            cout << " " << "";
        }
    }
    cout << "" << "\n";

    for(int i = 0; i < 60; i++){
        if( i == 0 || i == 59){
            cout << "*" << "";
        }
        if(i == 10){
            cout << "2. Registrar docentes consejeros" << "";
        }
        if(i != 0 && (i < 10 || i > 40) && i != 49){
            cout << " " << "";
        }
    }
    cout << "" << "\n";

    for(int i = 0; i < 60; i++){
        if( i == 0 || i == 59){
            cout << "*" << "";
        }
        if(i == 10){
            cout << "3. Registrar advising (consejeria)" << "";
        }
        if(i != 0 && (i < 10 || i > 42) && i != 49){
            cout << " " << "";
        }
    }
    cout << "" << "\n";

    for(int i = 0; i < 60; i++){
        if( i == 0 || i == 59){
            cout << "*" << "";
        }
        if(i == 10){
            cout << "4. Modificar datos/registros" << "";
        }
        if(i != 0 && (i < 10 || i > 36) && i != 49){
            cout << " " << "";
        }
    }
    cout << "" << "\n";

    for(int i = 0; i < 60; i++){
        if( i == 0 || i == 59){
            cout << "*" << "";
        }
        if(i == 10){
            cout << "5. Generar informes de advising" << "";
        }
        if(i != 0 && (i < 10 || i > 39) && i != 49){
            cout << " " << "";
        }
    }
    cout << "" << "\n";


    for(int i = 0; i < 60; i++){
        if( i == 0 || i == 59){
            cout << "*" << "";
        }
        if(i == 10){
            cout << "6. Salir" << "";
        }
        if(i != 0 && (i < 10 || i > 16) && i != 49){
            cout << " " << "";
        }
    }
    cout << "" << "\n";



    for(int i = 0; i < 60; i++){
        cout << "*" << "";
    }
    cout << "" << "\n";
    cout << "Ingresa tu opcion: " << "";
}
//funcion que imprime todos los datos de un estudiante, parametro es la posicion del estudiante en el arreglo
void ImprimirEstudiante(int i){
    cout << "\nNombre Completo: " + estudiantes[i][0];
    cout << "\nCodigo Estudiante: " + estudiantes[i][1];
    cout << "\nPrograma academico: " + estudiantes[i][2];
    cout << "\nSemestre actual: " + estudiantes[i][3];
    cout << "\nEstado academico: " + estudiantes[i][4];
    cout << "\nConsejero: " + estudiantes[i][5];
}
//funcion que imprime todos los datos de un docente, parametro es la posicion del docente en el arreglo
void ImprimirDocente(int i){
    cout << "\nNombre Completo: " + docentes[i][0];
    cout << "\nCedula: " + docentes[i][1];
    cout << "\nPrograma academico: " + docentes[i][2];
    cout << "\nNumero de estudiantes: " + docentes[i][3];
}
//funcion que muestra todos los estudiantes por estado
void ListarEstudiantesPorEstado(){
    bool cerrarMenu = false;
    int opc = 0;
    while(!cerrarMenu){
        cout << "Ingresa la opcion:\n1.Listar estudiantes en estado regular\n2.Listar estudiantes en prueba academica\n3.Salir\n";
        cout << "Ingresa la opcion: ";
        cin >> opc;
        system ("CLS");
        switch(opc){
        case 1:
            cout << "Nombre" << " | " << "Codigo" << " | " << "Programa" << " | " << "Semestre" << " | " << "Estado academico" << " | " << "Consejero" << "\n";
            for(int i = 0; i < 100; i++){
                if(estudiantes[i][4] == "regular" || estudiantes[i][4] == "Regular"){
                    cout << estudiantes[i][0] + " | " + estudiantes[i][1] + " | " + estudiantes[i][2] + " | " + estudiantes[i][3] + " | " + estudiantes[i][4] + " | " + estudiantes[i][5] + "\n";
                }
            }
            getch();
            break;
        case 2:
            cout << "Nombre" << " | " << "Codigo" << " | " << "Programa" << " | " << "Semestre" << " | " << "Estado academico" << " | " << "Consejero" << "\n";
            for(int i = 0; i < 100; i++){
                if(estudiantes[i][4] == "prueba" || estudiantes[i][4] == "Prueba"){
                    cout << estudiantes[i][0] + " | " + estudiantes[i][1] + " | " + estudiantes[i][2] + " | " + estudiantes[i][3] + " | " + estudiantes[i][4] + " | " + estudiantes[i][5] + "\n";
                }
            }
            getch();
            break;
        case 3:
            cerrarMenu = true;
            break;
        default:
            cout << "Ingresa una opcion valida ";
            getch();
            break;
        }
        system ("CLS");
    }
}
//funcion que muestra todos los estudiantes por situacion
void ListarEstudiantesPorSituacion(){
    bool cerrarMenu = false;
    int opc = 0;
    while(!cerrarMenu){
        string consejerias_buena [100][5];
        string consejerias_regular [100][5];
        string consejerias_baja [100][5];
        cout << "Ingresa la opcion:\n1.Listar estudiantes por BUENA situacion Academica\n2.Listar estudiantes por REGULAR situacion academica\n3.Listar estudiantes por BAJA situacion academica\n4.Salir\n";
        cout << "Ingresa la opcion: ";
        cin >> opc;
        system ("CLS");
        switch(opc){
        case 1:
            cout << "Nombre" << " | " << "Codigo" << " | " << "Docente consejero" << " | " << "Situacion academica" << " | " << "Situacion emocional" << "\n";
            for(int i = 0; i < 100; i++){
                if(consejerias[i][3] == "buena" || consejerias[i][3] == "Buena"){
                    bool existe = false;
                    for(int j = 0; j < 100 ; j++){
                       if(consejerias_buena[j][1] == consejerias[i][1]){
                            existe = true;
                            break;
                       }
                    }
                    if(!existe){
                        cout << consejerias[i][0] + " | " + consejerias[i][1] + " | " + consejerias[i][2] + " | " + consejerias[i][3] + " | " + consejerias[i][4] + "\n";
                        for(int k = 0; k < 100; k++){
                            if(consejerias_buena[k][1] == ""){
                                consejerias_buena[k][1] = consejerias[i][1];
                                break;
                            }
                        }
                    }

                }
            }
            getch();
            break;
        case 2:
            cout << "Nombre" << " | " << "Codigo" << " | " << "Docente consejero" << " | " << "Situacion academica" << " | " << "Situacion emocional" << "\n";
            for(int i = 0; i < 100; i++){
                if(consejerias[i][3] == "regular" || consejerias[i][3] == "Regular"){
                    bool existe = false;
                    for(int j = 0; j < 100 ; j++){
                       if(consejerias_regular[j][1] == consejerias[i][1]){
                            existe = true;
                            break;
                       }
                    }
                    if(!existe){
                        cout << consejerias[i][0] + " | " + consejerias[i][1] + " | " + consejerias[i][2] + " | " + consejerias[i][3] + " | " + consejerias[i][4] + "\n";
                        for(int k = 0; k < 100; k++){
                            if(consejerias_regular[k][1] == ""){
                                consejerias_regular[k][1] = consejerias[i][1];
                                break;
                            }
                        }
                    }
                }
            }
            getch();
            break;
        case 3:
            cout << "Nombre" << " | " << "Codigo" << " | " << "Docente consejero" << " | " << "Situacion academica" << " | " << "Situacion emocional" << "\n";
            for(int i = 0; i < 100; i++){
                if(consejerias[i][3] == "baja" || consejerias[i][3] == "Baja"){
                    bool existe = false;
                    for(int j = 0; j < 100 ; j++){
                       if(consejerias_baja[j][1] == consejerias[i][1]){
                            existe = true;
                            break;
                       }
                    }
                    if(!existe){
                        cout << consejerias[i][0] + " | " + consejerias[i][1] + " | " + consejerias[i][2] + " | " + consejerias[i][3] + " | " + consejerias[i][4] + "\n";
                        for(int k = 0; k < 100; k++){
                            if(consejerias_baja[k][1] == ""){
                                consejerias_baja[k][1] = consejerias[i][1];
                                break;
                            }
                        }
                    }
                }
            }
            getch();
            break;
        case 4:
            cerrarMenu = true;
            break;
        default:
            cout << "Ingresa una opcion valida ";
            getch();
            break;
        }
        system ("CLS");
    }
}
//funcion que muestra todos los estudiantes por motivacion
void ListarEstudiantesPorMotivacion(){
    bool cerrarMenu = false;
    int opc = 0;
    while(!cerrarMenu){
        string consejerias_animados [100][5];
        string consejerias_orientacion [100][5];
        cout << "Ingresa la opcion:\n1.Listar estudiantes ANIMADOS\n2.Listar estudiantes NECESITA ORIENTACION\n3.Salir\n";
        cout << "Ingresa la opcion: ";
        cin >> opc;
        system ("CLS");
        switch(opc){
        case 1:
            cout << "Nombre" << " | " << "Codigo" << " | " << "Docente consejero" << " | " << "Situacion academica" << " | " << "Situacion emocional" << "\n";
            for(int i = 0; i < 100; i++){
                if(consejerias[i][4] == "animado" || consejerias[i][4] == "Animado"){
                    bool existe = false;
                    for(int j = 0; j < 100 ; j++){
                       if(consejerias_animados[j][1] == consejerias[i][1]){
                            existe = true;
                            break;
                       }
                    }
                    if(!existe){
                        cout << consejerias[i][0] + " | " + consejerias[i][1] + " | " + consejerias[i][2] + " | " + consejerias[i][3] + " | " + consejerias[i][4] + "\n";
                        for(int k = 0; k < 100; k++){
                            if(consejerias_animados[k][1] == ""){
                                consejerias_animados[k][1] = consejerias[i][1];
                                break;
                            }
                        }
                    }

                }
            }
            getch();
            break;
        case 2:
            cout << "Nombre" << " | " << "Codigo" << " | " << "Docente consejero" << " | " << "Situacion academica" << " | " << "Situacion emocional" << "\n";
            for(int i = 0; i < 100; i++){
                if(consejerias[i][4] == "orientacion" || consejerias[i][4] == "Orientacion"){
                    bool existe = false;
                    for(int j = 0; j < 100 ; j++){
                       if(consejerias_orientacion[j][1] == consejerias[i][1]){
                            existe = true;
                            break;
                       }
                    }
                    if(!existe){
                        cout << consejerias[i][0] + " | " + consejerias[i][1] + " | " + consejerias[i][2] + " | " + consejerias[i][3] + " | " + consejerias[i][4] + "\n";
                        for(int k = 0; k < 100; k++){
                            if(consejerias_orientacion[k][1] == ""){
                                consejerias_orientacion[k][1] = consejerias[i][1];
                                break;
                            }
                        }
                    }
                }
            }
            getch();
            break;
        case 3:
            cerrarMenu = true;
            break;
        default:
            cout << "Ingresa una opcion valida ";
            getch();
            break;
        }
        system ("CLS");
    }
}
//funcion que muestra todos los estudiantes por docente consejero
void ListarEstudiantesPorConsejero(){
    int opc = 0;
    string nombre;
    string apellido;
    cout << "Ingresa el nombre del consejero: ";
    cin >> nombre;
    cout << "Ingresa el apellido del consejero: ";
    cin >> apellido;
    system ("CLS");
    cout << "Nombre" << " | " << "Codigo" << " | " << "Programa" << " | " << "Semestre" << " | " << "Estado academico" << " | " << "Consejero" << "\n";
    for(int i = 0; i < 100; i++){
        if(estudiantes[i][5] == (nombre + " " + apellido)){
             cout << estudiantes[i][0] + " | " + estudiantes[i][1] + " | " + estudiantes[i][2] + " | " + estudiantes[i][3] + " | " + estudiantes[i][4] + " | " + estudiantes[i][5] + "\n";
        }
    }
    getch();

}
//funcion que muestra los datos de un estudiante
void BuscarEstudiante(){
    string codigo;
    bool estudianteExiste = false;
    cout << "Ingresa el codigo del estudiante: ";
    cin >> codigo;
    for(int i = 0; i < 100; i++){
        if(estudiantes[i][1] == codigo){
            estudianteExiste = true;
            ImprimirEstudiante(i);
            getch();
            break;
        }
    }

    if(!estudianteExiste){
        cout << "\nNo existe ningun estudiante con ese codigo\n";
        getch();
    }

}
//funcion que muestra los datos de un docente
void BuscarDocente(){
    string cedula;
    bool profesorExiste = false;
    cout << "Ingresa la cedula del estudiante: ";
    cin >> cedula;
    for(int i = 0; i < 100; i++){
        if(docentes[i][1] == cedula){
            profesorExiste = true;
            ImprimirDocente(i);
            getch();
            break;
        }
    }

    if(!profesorExiste){
        cout << "\nNo existe ningun profesor con esa cedula\n";
        getch();
    }
}
//Funcion Generar reportes
void GenerarReportes(){
    int opc = 0;
    bool cerrarMenuReportes = false;
    while (!cerrarMenuReportes){
       ImprimirMenuReportes();
       cin >> opc;
       system ("CLS");
        switch(opc){
        case 1:
            BuscarEstudiante();
            break;
        case 2:
            BuscarDocente();
            break;
        case 3:
            ListarEstudiantesPorEstado();
            break;
        case 4:
            ListarEstudiantesPorSituacion();
            break;
        case 5:
            ListarEstudiantesPorMotivacion();
            break;
        case 6:
            ListarEstudiantesPorConsejero();
            break;
        case 7:
            cerrarMenuReportes = true;
            break;
        default:
            cout << "Ingresa una opcion valida" << "\n";
            getch();
            break;
        }
        system ("CLS");

    }

}
//funcion para modificar estado academico, parametro es la posicion del estudiante en el arreglo
void ModificarEstadoAcademico(int i){
    string estadoAcademico;
    while (true){
       cout << "Ingresa estado academico (Regular/Prueba): ";
        cin >> estadoAcademico;
        if(estadoAcademico == "prueba" || estadoAcademico == "Prueba" || estadoAcademico == "Regular" || estadoAcademico == "regular"){
            break;
        }
        else{
            cout << "Solo puedes ingresar Regular/Prueba\n";
        }
    }
    estudiantes[i][4] = estadoAcademico;
    cout << "\nDatos Guardados\n";
    ImprimirEstudiante(i);
    getch();
}
//funcion para modificar programa academico, parametro es la posicion del estudiante en el arreglo
void ModificarProgramaAcademico(int i){
    string programa;
    cout << "Ingresa el programa al que perteneces (Electrónica, Sistemas, Multimedia, Industrial o Agroindustrial): ";
    cin >> programa;
    estudiantes[i][2] = programa;
    cout << "\nDatos Guardados\n";
    ImprimirEstudiante(i);
    getch();
}
//funcion para modificar semestre, parametro es la posicion del estudiante en el arreglo
void ModificarSemestre(int i){
    string semestre;
    cout << "Ingresa semestre actual: ";
    cin >> semestre;
    estudiantes[i][3] = semestre;
    cout << "\nDatos Guardados\n";
    ImprimirEstudiante(i);
    getch();
}
//Función para modificar datos por código estudiantil
void ModificarRegistroPorCodigo(){
    bool cerrarMenuModificarCodigo = false;
    bool estudianteExiste = false;
    string codigo;
    int opc = 0;
    cout << "Ingresa el codigo del estudiante: ";
    cin >> codigo;
    for(int i = 0; i < 100; i++){
        if(estudiantes[i][1] == codigo){
            estudianteExiste = true;
            while(!cerrarMenuModificarCodigo){
                cout << "Ingresa el campo a modificar:\n1.Estado academico\n2.Programa academico\n3.Semestre\n4.Salir\n";
                cout << "Ingresa tu opcion: ";
                cin >> opc;
                system ("CLS");
                switch(opc){
                case 1:
                    ModificarEstadoAcademico(i);
                    break;
                case 2:
                    ModificarProgramaAcademico(i);
                    break;
                case 3:
                    ModificarSemestre(i);
                    break;
                case 4:
                    cerrarMenuModificarCodigo = true;
                    break;
                default:
                    cout << "\nSeleccione una opcion valida\n";
                    break;
                }
                system ("CLS");
            }
            break;
        }
    }


    if(!estudianteExiste){
        cout << "\nNo existe ningun estudiante con ese codigo\n";
        getch();
    }
}
//Funcion Eliminar estudiante
void EliminarEstudiante(){
    bool cerrarMenuEliminar = false;
    bool estudianteExiste = false;
    string codigo;
    int opc = 0;
    cout << "Ingresa el codigo del estudiante: ";
    cin >> codigo;
    for(int i = 0; i < 100; i++){
        if(estudiantes[i][1] == codigo){
            estudianteExiste = true;
            while(!cerrarMenuEliminar){
                cout << "Esta seguro de eliminar el estudiante:\n1.Si\n2.No\n";
                cout << "Ingresa tu opcion: ";
                cin >> opc;
                system ("CLS");
                switch(opc){
                case 1:
                    estudiantes[i][0] = "";
                    estudiantes[i][1] = "";
                    estudiantes[i][2] = "";
                    estudiantes[i][3] = "";
                    estudiantes[i][4] = "";
                    estudiantes[i][5] = "";
                    cout << "\nSe elimino el estudiante correctamente\n";
                    getch();
                    cerrarMenuEliminar = true;
                    break;
                case 2:
                    cerrarMenuEliminar = true;
                    break;
                default:
                    cout << "\nSeleccione una opcion valida\n";
                    break;
                }
                system ("CLS");
            }
            break;
        }
    }


    if(!estudianteExiste){
        cout << "\nNo existe ningun estudiante con ese codigo\n";
        getch();
    }
}
//Funcion Modificar datos y registros
void ModificarRegistro(){
    int opc = 0;
    bool cerrarMenuModificacion = false;
    while (!cerrarMenuModificacion){
       ImprimirMenuModificacion();
       cin >> opc;
       system ("CLS");
        switch(opc){
        case 1:
            ModificarRegistroPorCodigo();
            break;
        case 2:
            EliminarEstudiante();
            break;
        case 3:
            cerrarMenuModificacion = true;
            break;
        default:
            cout << "Ingresa una opcion valida" << "\n";
            getch();
            break;
        }
        system ("CLS");
    }

}
//Funcion registro de consejeria
void RegistrarConsejeria(){
    string nombre;
    string apellido;
    string codigo;
    string docente_nombre;
    string docente_apellido;
    string situacionAcademica;
    string situacionMotivacional;

    cout << "Ingresa nombre: ";
    cin >> nombre;

    cout << "Ingresa apellido: ";
    cin >> apellido;

    cout << "Ingresa su codigo: ";
    cin >> codigo;


    cout << "Ingresa consejero (Docente a cargo)\n";
    cout << "Ingresa Nombre del consejero: ";
    cin >> docente_nombre;
    cout << "Ingresa apellido del consejero: ";
    cin >> docente_apellido;

    for(int i = 0; i < 100; i++){
        if(estudiantes[i][1] == codigo){
            if(estudiantes[i][5] != (docente_nombre + " " + docente_apellido)){
                cout << "***El estudiante no corresponde a sus estudiantes asignados***\n";
            }
        }
    }


    while (true){
        cout << "Ingresa situación académica: (Buena/Regular/Baja) ";
        cin >> situacionAcademica;
        if(situacionAcademica == "buena" || situacionAcademica == "Buena" || situacionAcademica == "Regular" || situacionAcademica == "regular" || situacionAcademica == "Baja" || situacionAcademica == "baja"){
            break;
        }
        else{
            cout << "Solo puedes ingresar Buena/Regular/Baja\n";
        }
    }

    while (true){
        cout << "Ingresa situación motivacional/emocional: (Animado/Orientacion) ";
        cin >> situacionMotivacional;
        if(situacionMotivacional == "Animado" || situacionMotivacional == "animado" || situacionMotivacional == "orientacion" || situacionMotivacional == "Orientacion"){
            break;
        }
        else{
            cout << "Solo puedes ingresar Animado/Orientacion\n";
        }
    }

    if(situacionMotivacional == "Orientacion" || situacionMotivacional == "orientacion"){
       MostrarMensajeAlertaEstudiante();
       for(int i = 0; i < 100; i++){
        if(estudiantes[i][1] == codigo){
            ImprimirEstudiante(i);
        }
    }
    }

    for(int i = 0; i < 100 ; i++){
        if(consejerias[i][0] == ""){
            consejerias[i][0] = nombre + " " + apellido;
            consejerias[i][1] = codigo;
            consejerias[i][2] = docente_nombre + " " + docente_apellido;
            consejerias[i][3] = situacionAcademica;
            consejerias[i][4] = situacionMotivacional;
            break;
        }
    }

    cout << "\nConfirmar registro\n";
    getch();

}
//Main
int main(){
    bool cerrarMenu = false;
    int opc = 0;
    while(!cerrarMenu){
        ImprimirMenuPrincipal();
        cin >> opc;
        system ("CLS");
        switch(opc){
        case 1:
            RegistrarEstudiante();
            break;
        case 2:
            RegistrarDocentesConsejeros();
            break;
        case 3:
            RegistrarConsejeria();
            break;
        case 4:
            ModificarRegistro();
            break;
        case 5:
            GenerarReportes();
            break;
        case 6:
            cerrarMenu = true;
            break;
        default:
            cout << "Ingresa una opcion valida" << "\n";
            getch();
            break;
        }
        system ("CLS");
    }
    cout << "Gracias por usar nuestros servicios..." << "\n";
	getch();
	return 0;
}
