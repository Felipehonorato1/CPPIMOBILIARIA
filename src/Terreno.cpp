#include "Terreno.h"

Terreno::Terreno()
{
    //ctor
    tipoImovel = 3;
    titulo = "Imovel sem titulo";
    logradouro = "Rua nao identificada";
    bairro = "Bairro nao identificado";
    CEP = "Nao identificado";
    cidade = "Cidade nao identificada";
    numero = 0;
    valor = 0;
    tipoNegocio = 'N';
    area = 0;
}

Terreno::Terreno(std::string t, std::string l, std::string b, std::string cep, std::string c, int n, double v, char tN, double a)
{
    //ctor
    tipoImovel = 3;
    titulo = t;
    logradouro = l;
    bairro = b;
    CEP = cep;
    cidade = c;
    numero = n;
    valor = v;
    tipoNegocio = tN;
    area = a;
}

double Terreno::getArea()
{
    return area;
}
