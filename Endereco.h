#ifndef ENDERECO_H
#define ENDERECO_H
#include <iostream>

using namespace std;

class Endereco{
    public:

    Endereco();
    Endereco(string r,string b,string cp, string c,int num);

    void setNumero(int num);
    void setRua(string r);
    void setBairro(string b);
    void setCidade(string c);
    void setCep(string cp);
    int getNumero();
    string getBairro();
    string getCidade();
    string getRua();
    string getCep();
    

    private:
    int numero;
    string rua;
    string bairro;
    string cidade;
    string cep;

};

#endif 