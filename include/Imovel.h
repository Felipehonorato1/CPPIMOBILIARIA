#ifndef IMOVEL_H
#define IMOVEL_H

#include <string>

class Imovel
{
    public:
        int getTipoImovel();

        std::string getTitulo();

        double getValor();

        char getTipoNegocio();

        std::string getEndereco();

    protected:
        std::string titulo, logradouro, bairro, CEP, cidade;
        int tipoImovel, numero;
        double valor;
        char tipoNegocio;

    private:
};

#endif // IMOVEL_H
