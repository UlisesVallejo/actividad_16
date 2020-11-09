#ifndef COMPUTADORA_H
#define COMPUTADORA_H
#include <iostream>
#include <iomanip>
using namespace std;

class Computadora
{
    string marca;
    string sisop;
    float peso;
    int ram;

public:
     Computadora();
     Computadora(const string &marca, const string &sisop, float peso, int ram);

     void setMarca(const string &v);
     void setSisop(const string &v);
     void setPeso(float v);
     void setRam(int v);

    string getMarca();
    string getSisop();
    float getPeso();
    int getRam();


    friend ostream& operator<<(ostream &out, const Computadora &c)
    {
        out << left;
        out << setw(10) << c.marca;
        out << setw(12) << c.sisop;
        out << setw(8) << c.peso;
        out << setw(8) << c.ram;
        out << endl;

        return out;
    }

    friend istream& operator>>(istream &in, Computadora &c)
    {
        cout << "Marca: ";
        getline(cin, c.marca);

        cout << "Sistema operativo: ";
        getline(cin, c.sisop);

        cout << "Peso: ";
        cin >> c.peso;

        cout << "Ram: ";
        cin >> c.ram;

        return in;
    }

    bool operator==(const Computadora& c)
    {
        return marca == c.marca;
    }
    bool operator==(const Computadora& c) const
    {
        return marca == c.marca;
    }

    bool operator<(const Computadora& c)
    {
        return marca < c.marca;
    }
    bool operator<(const Computadora& c) const
    {
        return marca < c.marca;
    }
};

#endif