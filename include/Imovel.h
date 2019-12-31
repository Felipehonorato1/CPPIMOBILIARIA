#ifndef IMOVEL_H
#define IMOVEL_H

#include <string>

class Imovel
{
    public:
        Imovel();
        Imovel(std::string l, std::string b, std::string cep, std::string c, int n, double v, char t);

        double getValor();

        char getTipoNegocio();

        std::string getEndereco();

    protected:
        std::string logradouro, bairro, CEP, cidade;
        int numero;
        double valor;
        char tipoNegocio;

    private:
};

#endif // IMOVEL_H
