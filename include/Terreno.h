#ifndef TERRENO_H
#define TERRENO_H

#include <Imovel.h>


class Terreno : public Imovel
{
    public:
        Terreno();
        Terreno(std::string l, std::string b, std::string cep, std::string c, int n, double v, char t, double a);

    protected:

    private:
        int tipoImovel;
        double area;
};

#endif // TERRENO_H
