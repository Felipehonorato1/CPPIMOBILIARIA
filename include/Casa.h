#ifndef CASA_H
#define CASA_H

#include <Imovel.h>


class Casa : public Imovel
{
    public:
        Casa();
        Casa(std::string t, std::string l, std::string b, std::string cep, std::string c, int n, double v, char tN, int p, int q, double aT,
             double aC);

        int getPavimentos();

        int getQuartos();

        double getAreaTerreno();

        double getAreaConstruida();

    protected:

    private:
        int pavimentos, quartos;
        double areaTerreno, areaConstruida;
};

#endif // CASA_H
