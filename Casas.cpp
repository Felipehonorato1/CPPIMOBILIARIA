#include <iostream>
#include "Endereco.h"
#include "Casas.h"

using namespace std;

    Casas::Casas(Endereco h,float ms, int p, int q){
        end = h;
        mQuadrados = ms;
        pavimentos = p;
        quartos = q;
    }

    Casas::Casas(){
        mQuadrados = 0;
        pavimentos = 0;
        quartos = 0;

    }
    void Casas::setEndereco(Endereco h){
        end = h;
    }
    
    void Casas::setMetros(float ms){
        mQuadrados = ms;
    }
    void Casas::setPavimentos(int p){
        pavimentos = p;
    }
    void Casas::setQuartos(int q){
        quartos = q;
    }

    int Casas::getQuartos(){
        return quartos;
    }
    float Casas::getMetros(){
        return mQuadrados;
    }
    int Casas::getPavimentos(){
        return pavimentos;
    }

