#include "Apartamento.h"

Apartamento::Apartamento()
{
    //ctor
    tipoImovel = 2;
    Imovel();
    area = 0;
    valorCondominio = 0;
    quartos = 0;
    andar = 0;
    vagasGaragem = 0;
    posicao = "Nao identificada";
}

Apartamento::Apartamento(std::string l, std::string b, std::string cep, std::string c, int n, double v, char t, double ar,
                         double vC, int q, int an, int vG, std::string p)
{
    //ctor
    tipoImovel = 2;
    Imovel(l, b, cep, c, n, v, t);
    area = ar;
    valorCondominio = vC;
    quartos = q;
    andar = an;
    vagasGaragem = vG;
    posicao = p;
}
