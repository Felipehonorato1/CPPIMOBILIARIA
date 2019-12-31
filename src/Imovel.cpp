#include "Imovel.h"
#include <sstream>

Imovel::Imovel()
{
    //ctor
    logradouro = "Rua nao identificada";
    bairro = "Bairro nao identificado";
    CEP = "Nao identificado";
    cidade = "Cidade nao identificada";
    numero = 0;
    valor = 0;
    tipoNegocio = 'N';
}

Imovel::Imovel(std::string l, std::string b, std::string cep, std::string c, int n, double v, char t)
{
    //ctor
    logradouro = l;
    bairro = b;
    CEP = cep;
    cidade = c;
    numero = n;
    valor = v;
    tipoNegocio = t;
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
