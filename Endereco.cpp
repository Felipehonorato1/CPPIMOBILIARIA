#include "Endereco.h"
#include <iostream>

using namespace std;

Endereco::Endereco(){
    rua = bairro = cep = cidade = "";
    numero = 0;
}

Endereco::Endereco(string r,string b,string cp, string c,int num){
    rua = r;
    bairro = b;
    cep = cp;
    cidade = c;
    numero = num;
}


void Endereco::setNumero(int num){
    numero = num;
}
void Endereco::setRua(string r){
    rua = r;
}
void Endereco::setBairro(string b){
    bairro = b;
}
void Endereco::setCidade(string c){
    cidade = c;
}
void Endereco::setCep(string cp){
    cep = cp;
}

int Endereco::getNumero()
{
    return numero;
}
string Endereco::getBairro(){
    return bairro;
}
string Endereco::getCidade()
{
    return cidade;
}
string Endereco::getRua(){
    return rua;
} 
string Endereco::getCep(){
    return cep;
}