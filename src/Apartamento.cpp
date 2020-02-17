#include "Apartamento.h"

Apartamento::Apartamento()
{
    //ctor
    tipoImovel = 2;
    titulo = "Imovel sem titulo";
    logradouro = "Rua nao identificada";
    bairro = "Bairro nao identificado";
    CEP = "Nao identificado";
    cidade = "Cidade nao identificada";
    numero = 0;
    valor = 0;
    tipoNegocio = 'N';
    area = 0;
    valorCondominio = 0;
    quartos = 0;
    andar = 0;
    vagasGaragem = 0;
    posicao = "Nao identificada";
}

Apartamento::Apartamento(std::string t, std::string l, std::string b, std::string cep, std::string c, int n, double v, char tN, double ar,
                         double vC, int q, int an, int vG, std::string p)
{
    //ctor
    tipoImovel = 2;
    titulo = t;
    logradouro = l;
    bairro = b;
    CEP = cep;
    cidade = c;
    numero = n;
    valor = v;
    tipoNegocio = tN;
    area = ar;
    valorCondominio = vC;
    quartos = q;
    andar = an;
    vagasGaragem = vG;
    posicao = p;
}

int Apartamento::getQuartos()
{
    return quartos;
}

int Apartamento::getAndar()
{
    return andar;
}

int Apartamento::getVagasGaragem()
{
    return vagasGaragem;
}

double Apartamento::getArea()
{
    return area;
}

void Apartamento::setValorCondominio(double vC)
{
    valorCondominio = vC;
}
double Apartamento::getValorCondominio()
{
    return valorCondominio;
}

std::string Apartamento::getPosicao()
{
    return posicao;
}
