#ifndef CASAS_H
#define CASAS_H
#include "Endereco.h"

using namespace std;

class Casas{
    public:
    Casas();
    Casas(Endereco h,float mQuadrados, int pavimentos, int quartos);
    
    void setEndereco(Endereco h);
    void setMetros(float ms);
    void setPavimentos(int p);
    void setQuartos(int q);

    int getQuartos();
    float getMetros();
    int getPavimentos();




    private:
    Endereco end;
    int quartos,pavimentos;
    float mQuadrados;
};

#endif