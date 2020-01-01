#include "Imovel.h"
#include <sstream>

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
