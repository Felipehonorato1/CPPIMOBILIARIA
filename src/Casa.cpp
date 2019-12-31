#include "Casa.h"

Casa::Casa()
{
    //ctor
    tipoImovel = 1;
    Imovel();
    pavimentos = 0;
    quartos = 0;
    areaTerreno = 0;
    areaConstruida = 0;
}

Casa::Casa(std::string l, std::string b, std::string cep, std::string c, int n, double v, char t, int p, int q, double aT,
           double aC)
{
    //ctor
    tipoImovel = 1;
    Imovel(l, b, cep, c, n, v, t);
    pavimentos = p;
    quartos = q;
    areaTerreno = aT;
    areaConstruida = aC;
}
