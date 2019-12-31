#include "Terreno.h"

Terreno::Terreno()
{
    //ctor
    tipoImovel = 3;
    Imovel();
    area = 0;
}

Terreno::Terreno(std::string l, std::string b, std::string cep, std::string c, int n, double v, char t, double a)
{
    tipoImovel = 3;
    Imovel(l, b, cep, c, n, v, t);
    area = a;
}
