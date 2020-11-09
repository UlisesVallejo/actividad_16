#include <iostream>
#include "laboratorio.h"

using namespace std;

int main(){
    Laboratorio l;
    string opc;

    while (true)
    {
        cout << "1.- Agregar al final" << endl;
        cout << "2.- Mostrar" << endl;
        cout << "3.- Respaldar" << endl;
        cout << "4.- Recuperar" << endl;
        cout << "5.- Insertar" << endl;
        cout << "6.- Inicializar" << endl;
        cout << "7.- Eliminar" << endl;
        cout << "8.- Ordenar" << endl;
        cout << "9.- Borrar ultimo" << endl;
        cout << "10.- Buscar" << endl;
        cout << "0.- Salir" << endl;
        cout << "Ingresa una opcion: ";
        getline(cin, opc);

        if(opc == "1")
        {
            Computadora c;

            cin >> c;

            l.agregarFinal(c);
            cin.ignore();
        }
        else if(opc == "2")
        {
            l.mostrar();
        }
        else if(opc == "3")
        {
            l.respaldar();
        }
        else if(opc == "4")
        {
            l.recuperar();
        }
        else if(opc == "5")
        {
            Computadora c;
            cin >> c;

            size_t pos;
            cout << "posicion: ";
            cin >> pos; cin.ignore();
            if(pos >= l.size()){
                cout << "Posicion no valida" << endl;
            }
            else{
                l.insertar(c, pos);
            }
        }
        else if(opc == "6")
        {
            Computadora c;
            cin >> c;

            size_t n;
            cout << "n: "; 
            cin >> n; cin.ignore();

            l.inicializar(c, n);
        }
        else if(opc == "7")
        {
            size_t pos;
            cout << "posicion: ";
            cin >> pos; cin.ignore();
            if(pos >= l.size()){
                cout << "Posicion no valida" << endl;
            }
            else{
                l.eliminar(pos);
            }
        }
        else if(opc == "8")
        {
            l.ordenar();
        }
        else if(opc == "9")
        {
            l.eliminar_ult();
        }
        else if(opc == "10")
        {
            Computadora c;
            cin >> c; cin.ignore();

            Computadora *ptr = l.buscar(c);

            if(ptr == nullptr){
                cout << "No hay coincidencias" << endl;
            }
            else{
                cout << *ptr << endl;
            }
        }
        else if(opc == "0")
        {
            break;
        }
    }

    return 0;
}