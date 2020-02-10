#ifndef IMOVEL_H
#define IMOVEL_H

#include <string>

class Imovel
{
    public:
        virtual ~Imovel();

        int getTipoImovel();

        void setTitulo(std::string t);
        std::string getTitulo();

        void setValor(double v);
        double getValor();

        char getTipoNegocio();

        std::string getEndereco();

        std::string getLogradouro();

        std::string getBairro();

        std::string getCidade();

        std::string getCEP();

        int getNumero();

        virtual int getPavimentos();

        virtual int getQuartos();

        virtual double getAreaTerreno();

        virtual double getAreaConstruida();

        virtual int getAndar();

        virtual int getVagasGaragem();

        virtual double getArea();

        virtual void setValorCondominio(double vC);
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
