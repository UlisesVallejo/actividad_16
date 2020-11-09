#include "computadora.h"

Computadora::Computadora()
{

}

Computadora::Computadora(const string &marca, const string &sisop, float peso, int ram)
{
    this->marca = marca;
    this->sisop = sisop;
    this->peso = peso;
    this->ram = ram;
}

void Computadora::setMarca(const string &v)
{
    marca = v;
}
void Computadora::setSisop(const string &v)
{
    sisop = v;
}
void Computadora::setPeso(float v)
{
    peso = v;
}
void Computadora::setRam(int v)
{
    ram = v;
}



string Computadora::getMarca()
{
    return marca;
}
string Computadora::getSisop()
{
    return sisop;
}
float Computadora::getPeso()
{
    return peso;
}
int Computadora::getRam()
{
    return ram;
}