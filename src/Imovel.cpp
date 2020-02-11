#include "Imovel.h"
#include <sstream>

Imovel::~Imovel()
{

}

int Imovel::getTipoImovel()
{
    return tipoImovel;
}

std::string Imovel::getTitulo()
{
    return titulo;
}

double Imovel::getValor()
{
    return valor;
}

char Imovel::getTipoNegocio()
{
    return tipoNegocio;
}

std::string Imovel::getEndereco()
{
    std::stringstream ss;
    ss << numero;
    std::string stringNumero(ss.str());
    return logradouro + ", " + stringNumero + " - " + bairro + ". " + cidade + ". CEP: " + CEP;
}

int Imovel::getPavimentos()
{
    return 0;
}

int Imovel::getQuartos()
{
    return 0;
}

double Imovel::getAreaTerreno()
{
    return 0;
}

double Imovel::getAreaConstruida()
{
    return 0;
}

int Imovel::getAndar()
{
    return 0;
}

int Imovel::getVagasGaragem()
{
    return 0;
}

double Imovel::getArea()
{
    return 0;
}

double Imovel::getValorCondominio()
{
    return 0;
}

std::string Imovel::getPosicao()
{
    return "";
}


std::string Imovel::getLogradouro(){
    return logradouro;
}

std::string Imovel::getBairro(){
    return bairro;
}

std::string Imovel::getCidade(){
    return cidade;
}

std::string Imovel::getCEP(){
    return CEP;
}

int Imovel::getNumero(){
    return numero;
}

void Imovel::setTitulo(std::string t){
    titulo = t;
}

void Imovel::setValor(double v){
    valor = v;
}

void Imovel::setValorCondominio(double vc){
    vc = 0;
}
