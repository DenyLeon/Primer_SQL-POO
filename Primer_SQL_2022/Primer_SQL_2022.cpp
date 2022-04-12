// #include <mysql.h>
#include <iostream>
#include "Cliente.h"

// using namespace std;
int main(){
    string nit, nombres, apellidos, direccion, fecha_nacimiento;
    int telefono;
    cout << "Ingrese nit:";
    getline(cin, nit);
    cout << "Ingrese Nombres:";
    getline(cin, nombres);
    cout << "Ingrese Apellidos:";
    getline(cin, apellidos);
    cout << "Ingrese Direccion:";
    getline(cin, direccion);
    cout << "Ingrese Telefono:";
    cin >> telefono;
    cin.ignore();
    cout << "Ingrese Fecha Nacimiento:";
    cin >> fecha_nacimiento;

    Cliente c = Cliente(nombres, apellidos, direccion, telefono, fecha_nacimiento, nit);
    c.crear();

    //cout << "Hello World!\n";   
    //MYSQL* conectar;
    //conectar = mysql_init(0);
    //conectar = mysql_real_connect(conectar, "localhost", "root", "Umg$2019", "db_empresa", 3306, NULL, 0);
       // if (conectar) {
            //cout << "conexion exitosa ..." << endl;
            //int q_estado;
            //Insert
            /*cout << "Ingrese puesto:";
            string puesto;
            cin >> puesto;
            string insert = "insert into puestos (puesto) values ('" + puesto + "');";
            const char* i = insert.c_str();
            q_estado = mysql_query(conectar, i);
            if (!q_estado) {
                cout << "Ingreso exitoso" << endl;
            }
            else {
                cout << "Fallo ingreso" << endl;
            }*/
            //Select
            //MYSQL_ROW fila;
            //MYSQL_RES* resultado;
            /*string consulta = "select * from puestos;";
            const char* c = consulta.c_str();
            q_estado = mysql_query(conectar, c);
            if (!q_estado) {
                resultado = mysql_store_result(conectar);
                while (fila= mysql_fetch_row(resultado))
                {
                    cout << fila[0] << "," << fila[1] << endl;
                }
            }
            else {
                cout << "Fallo consulta" << endl;
            }*/
        //}
       // else {
           // cout << "Error al conectar" << endl;
       // }
    //Cliente c = Cliente();
    c.leer();   
    system("pause");

    return 0;
}
