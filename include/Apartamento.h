#ifndef APARTAMENTO_H
#define APARTAMENTO_H

#include <Imovel.h>


class Apartamento : public Imovel
{
    public:
        Apartamento();
        Apartamento(std::string l, std::string b, std::string cep, std::string c, int n, double v, char t, double ar, double vC,
                    int q, int an, int vG, std::string p);

    protected:

    private:
        double area, valorCondominio, tipoImovel;
        int quartos, andar, vagasGaragem;
        std::string posicao;
};

#endif // APARTAMENTO_H
