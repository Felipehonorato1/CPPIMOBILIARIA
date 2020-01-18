#ifndef IMOVEL_H
#define IMOVEL_H

#include <string>

class Imovel
{
    public:
        virtual ~Imovel();

        int getTipoImovel();

        std::string getTitulo();

        double getValor();

        char getTipoNegocio();

        std::string getEndereco();

        virtual int getPavimentos();

        virtual int getQuartos();

        virtual double getAreaTerreno();

        virtual double getAreaConstruida();

        virtual int getAndar();

        virtual int getVagasGaragem();

        virtual double getArea();

        virtual double getValorCondominio();

        virtual std::string getPosicao();

    protected:
        std::string titulo, logradouro, bairro, CEP, cidade;
        int tipoImovel, numero;
        double valor;
        char tipoNegocio;

    private:
};

#endif // IMOVEL_H
