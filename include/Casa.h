#ifndef CASA_H
#define CASA_H

#include <Imovel.h>


class Casa : public Imovel
{
    public:
        Casa();
        Casa(std::string l, std::string b, std::string cep, std::string c, int n, double v, char t, int p, int q, double aT,
             double aC);

    protected:

    private:
        int pavimentos, quartos, tipoImovel;
        double areaTerreno, areaConstruida;
};

#endif // CASA_H
