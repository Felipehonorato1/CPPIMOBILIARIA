#include "Casa.h"

Casa::Casa()
{
    //ctor
    tipoImovel = 1;
    titulo = "Imovel sem titulo";
    logradouro = "Rua nao identificada";
    bairro = "Bairro nao identificado";
    CEP = "Nao identificado";
    cidade = "Cidade nao identificada";
    numero = 0;
    valor = 0;
    tipoNegocio = 'N';
    pavimentos = 0;
    quartos = 0;
    areaTerreno = 0;
    areaConstruida = 0;
}

Casa::Casa(std::string t, std::string l, std::string b, std::string cep, std::string c, int n, double v, char tN, int p, int q, double aT,
           double aC)
{
    //ctor
    tipoImovel = 1;
    titulo = t;
    logradouro = l;
    bairro = b;
    CEP = cep;
    cidade = c;
    numero = n;
    valor = v;
    tipoNegocio = tN;
    pavimentos = p;
    quartos = q;
    areaTerreno = aT;
    areaConstruida = aC;
}

int Casa::getPavimentos()
{
    return pavimentos;
}

int Casa::getQuartos()
{
    return quartos;
}

double Casa::getAreaTerreno()
{
    return areaTerreno;
}

double Casa::getAreaConstruida()
{
    return areaConstruida;
}
