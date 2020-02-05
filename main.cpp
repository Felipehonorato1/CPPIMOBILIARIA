#include <iostream>
#include "Casa.h"
#include "Apartamento.h"
#include "Terreno.h"
#include <vector>
#include <fstream>
#include <sstream>
#include <ctype.h>

using namespace std;

void MenuPrincipal(){
    cout << "==================================================================================" << endl;
    cout << "\t\t [1] Cadastrar imovel" << endl;
    cout << "\t\t [2] Consultar imoveis" << endl;
    cout << "\t\t [3] Buscar imovel" << endl;
    cout << "\t\t [4] Editar imovel" << endl;
    cout << "\t\t [5] Remover imovel" << endl;
    cout << "\t\t [6] Salvar dados" << endl;
    cout << "\t\t [7] Sair" << endl;
    cout << "==================================================================================" << endl;
}

void MenuTipoImovel()
{
    cout << "==================================================================================" << endl;
    cout << "\t\t [1] Casa" << endl;
    cout << "\t\t [2] Apartamento" << endl;
    cout << "\t\t [3] Terreno" << endl;
    cout << "==================================================================================" << endl;
}

void MenuBuscarImovel()
{
    cout << "==================================================================================" << endl;
    cout << "\t\t [1] Busca por bairro" << endl;
    cout << "\t\t [2] Busca por cidade" << endl;
    cout << "\t\t [3] Busca por titulo" << endl;
    cout << "\t\t [4] Busca por valor" << endl;
    cout << "==================================================================================" << endl;
}

void MenuEdita(){
	cout << "==================================================================================" << endl;
    cout << "\t\t [1] Editar titulo do imovel" << endl;
    cout << "\t\t [2] Editar valor do imovel" << endl;
    cout << "==================================================================================" << endl;
}

void MenuEdita2(){
	cout << "==================================================================================" << endl;
    cout << "\t\t [1] Editar titulo do imovel" << endl;
    cout << "\t\t [2] Editar valor do imovel" << endl;
    cout << "\t\t [3] Editar valor do condominio" << endl;
    cout << "==================================================================================" << endl;
}

string tl(string s) {
    string nova_s;
    for (int i = 0; i < s.length(); i++) {
        nova_s += tolower(s[i]);
    }
    return nova_s;
}

void BuscaBairro(vector<Imovel*> imoveis, string bairro)
{
    int encontrou = 0;
    unsigned int tamanho = imoveis.size();
    for(unsigned int i = 0; i < tamanho; i++){
        if(tl(imoveis[i]->getBairro()).find(tl(bairro)) != string::npos){
            if(imoveis[i]->getTipoImovel() == 1){
                cout.precision(2);
                cout << fixed;

                cout << "\t\t [" << i+1 << "]\t" << imoveis[i]->getTitulo() << endl;

                cout << "\t\t Endereco: " << imoveis[i]->getEndereco() << endl;

                cout << "\t\t Numero de pavimentos: " << imoveis[i]->getPavimentos() << endl;

                cout << "\t\t Numero de quartos: " << imoveis[i]->getQuartos() << endl;

                cout << "\t\t Area do terreno: " << imoveis[i]->getAreaTerreno() << "m2" << endl;

                cout << "\t\t Area construida: " << imoveis[i]->getAreaConstruida() << "m2" << endl;

                if (imoveis[i]->getTipoNegocio() == 'A' || imoveis[i]->getTipoNegocio() == 'a'){
                cout << "\t\t Disponivel para aluguel" << endl;
                }else if (imoveis[i]->getTipoNegocio() == 'V' || imoveis[i]->getTipoNegocio() == 'v'){
                cout << "\t\t Disponivel para venda" << endl;}

                cout << "\t\t Valor: R$" << imoveis[i]->getValor() << endl;
                encontrou++;
            }else if(imoveis[i]->getTipoImovel() == 2){
                cout.precision(2);
                cout << fixed;

                cout << "\t\t [" << i+1 << "]\t"  << imoveis[i]->getTitulo() << endl;

                cout << "\t\t Endereco: " << imoveis[i]->getEndereco() << endl;

                cout << "\t\t Andar: " << imoveis[i]->getAndar() << endl;

                cout << "\t\t Numero de quartos: " << imoveis[i]->getQuartos() << endl;

                cout << "\t\t Numero de vagas na garagem: " << imoveis[i]->getVagasGaragem() << endl;

                cout << "\t\t Area: " << imoveis[i]->getArea() << "m2" << endl;

                cout << "\t\t Posicao: " << imoveis[i]->getPosicao() << endl;

                cout << "\t\t Valor do condominio: R$" << imoveis[i]->getValorCondominio() << endl;

                if (imoveis[i]->getTipoNegocio() == 'A' || imoveis[i]->getTipoNegocio() == 'a')
                    cout << "\t\t Disponivel para aluguel" << endl;
                else if (imoveis[i]->getTipoNegocio() == 'V' || imoveis[i]->getTipoNegocio() == 'v')
                    cout << "\t\t Disponivel para venda" << endl;

                cout << "\t\t Valor: R$" << imoveis[i]->getValor() << endl;
                encontrou++;
            }else{
                cout.precision(2);
                cout << fixed;

                cout << "\t\t[" << i+1 << "]\t"  << imoveis[i]->getTitulo() << endl;

                cout << "\t\t Endereco: " << imoveis[i]->getEndereco() << endl;

                cout << "\t\t Area: " << imoveis[i]->getArea() << "m2" << endl;

                if (imoveis[i]->getTipoNegocio() == 'A' || imoveis[i]->getTipoNegocio() == 'a')
                    cout << "\t\t Disponivel para aluguel" << endl;
                else if (imoveis[i]->getTipoNegocio() == 'V' || imoveis[i]->getTipoNegocio() == 'v')
                    cout << "\t\t Disponivel para venda" << endl;

                cout << "\t\t Valor: R$" << imoveis[i]->getValor() << endl;
                encontrou++;
            }
        cout << endl;
        }
        if(i == (tamanho-1) && encontrou == 0){
        cout << "\n\t\tIMOVEL NAO ENCONTRADO!!" << endl;
        }
    }

}

void BuscaCidade(vector<Imovel*> imoveis, string cidade)
{
    int encontrou = 0;
    unsigned int tamanho = imoveis.size();
    for(unsigned int i = 0; i < tamanho; i++){
        if(tl(imoveis[i]->getCidade()).find(tl(cidade)) != string::npos){
            if(imoveis[i]->getTipoImovel() == 1){
                cout.precision(2);
                cout << fixed;

                cout << "\t\t[" << i+1 << "]\t"  << imoveis[i]->getTitulo() << endl;

                cout << "\t\t Endereco: " << imoveis[i]->getEndereco() << endl;

                cout << "\t\t Numero de pavimentos: " << imoveis[i]->getPavimentos() << endl;

                cout << "\t\t Numero de quartos: " << imoveis[i]->getQuartos() << endl;

                cout << "\t\t Area do terreno: " << imoveis[i]->getAreaTerreno() << "m2" << endl;

                cout << "\t\t Area construida: " << imoveis[i]->getAreaConstruida() << "m2" << endl;

                if (imoveis[i]->getTipoNegocio() == 'A' || imoveis[i]->getTipoNegocio() == 'a'){
                cout << "\t\t Disponivel para aluguel" << endl;
                }else if (imoveis[i]->getTipoNegocio() == 'V' || imoveis[i]->getTipoNegocio() == 'v'){
                cout << "\t\t Disponivel para venda" << endl;}

                cout << "\t\t Valor: R$" << imoveis[i]->getValor() << endl;
                encontrou++;
            }else if(imoveis[i]->getTipoImovel() == 2){
                cout.precision(2);
                cout << fixed;

                cout << "\t\t[" << i+1 << "]\t"  << imoveis[i]->getTitulo() << endl;

                cout << "\t\t Endereco: " << imoveis[i]->getEndereco() << endl;

                cout << "\t\t Andar: " << imoveis[i]->getAndar() << endl;

                cout << "\t\t Numero de quartos: " << imoveis[i]->getQuartos() << endl;

                cout << "\t\t Numero de vagas na garagem: " << imoveis[i]->getVagasGaragem() << endl;

                cout << "\t\t Area: " << imoveis[i]->getArea() << "m2" << endl;

                cout << "\t\t Posicao: " << imoveis[i]->getPosicao() << endl;

                cout << "\t\t Valor do condominio: R$" << imoveis[i]->getValorCondominio() << endl;

                if (imoveis[i]->getTipoNegocio() == 'A' || imoveis[i]->getTipoNegocio() == 'a')
                    cout << "\t\t Disponivel para aluguel" << endl;
                else if (imoveis[i]->getTipoNegocio() == 'V' || imoveis[i]->getTipoNegocio() == 'v')
                    cout << "\t\t Disponivel para venda" << endl;

                cout << "\t\t Valor: R$" << imoveis[i]->getValor() << endl;
                encontrou++;
            }else{
                cout.precision(2);
                cout << fixed;

                cout << "\t\t[" << i+1 << "]\t"  << imoveis[i]->getTitulo() << endl;

                cout << "\t\t Endereco: " << imoveis[i]->getEndereco() << endl;

                cout << "\t\t Area: " << imoveis[i]->getArea() << "m2" << endl;

                if (imoveis[i]->getTipoNegocio() == 'A' || imoveis[i]->getTipoNegocio() == 'a')
                    cout << "\t\t Disponivel para aluguel" << endl;
                else if (imoveis[i]->getTipoNegocio() == 'V' || imoveis[i]->getTipoNegocio() == 'v')
                    cout << "\t\t Disponivel para venda" << endl;

                cout << "\t\t Valor: R$" << imoveis[i]->getValor() << endl;
                encontrou++;
            }
        cout << endl;
        }
        if(i == (tamanho-1) && encontrou == 0){
        cout << "\n\t\tIMOVEL NAO ENCONTRADO!!" << endl;
        }
    }

}

void BuscaTitulo(vector<Imovel*> imoveis, string titulo)
{
    int encontrou = 0;
    unsigned int tamanho = imoveis.size();
    for(unsigned int i = 0; i < tamanho; i++){
          if(tl(imoveis[i]->getTitulo()).find(tl(titulo)) != string::npos){
            if(imoveis[i]->getTipoImovel() == 1){
                cout.precision(2);
                cout << fixed;

                cout << "\t\t[" << i+1 << "]\t"  << imoveis[i]->getTitulo() << endl;

                cout << "\t\t Endereco: " << imoveis[i]->getEndereco() << endl;

                cout << "\t\t Numero de pavimentos: " << imoveis[i]->getPavimentos() << endl;

                cout << "\t\t Numero de quartos: " << imoveis[i]->getQuartos() << endl;

                cout << "\t\t Area do terreno: " << imoveis[i]->getAreaTerreno() << "m2" << endl;

                cout << "\t\t Area construida: " << imoveis[i]->getAreaConstruida() << "m2" << endl;

                if (imoveis[i]->getTipoNegocio() == 'A' || imoveis[i]->getTipoNegocio() == 'a'){
                cout << "\t\t Disponivel para aluguel" << endl;
                }else if (imoveis[i]->getTipoNegocio() == 'V' || imoveis[i]->getTipoNegocio() == 'v'){
                cout << "\t\t Disponivel para venda" << endl;}

                cout << "\t\t Valor: R$" << imoveis[i]->getValor() << endl;
                encontrou++;
            }else if(imoveis[i]->getTipoImovel() == 2){
                cout.precision(2);
                cout << fixed;

                cout << "\t\t[" << i+1 << "]\t"  << imoveis[i]->getTitulo() << endl;

                cout << "\t\t Endereco: " << imoveis[i]->getEndereco() << endl;

                cout << "\t\t Andar: " << imoveis[i]->getAndar() << endl;

                cout << "\t\t Numero de quartos: " << imoveis[i]->getQuartos() << endl;

                cout << "\t\t Numero de vagas na garagem: " << imoveis[i]->getVagasGaragem() << endl;

                cout << "\t\t Area: " << imoveis[i]->getArea() << "m2" << endl;

                cout << "\t\t Posicao: " << imoveis[i]->getPosicao() << endl;

                cout << "\t\t Valor do condominio: R$" << imoveis[i]->getValorCondominio() << endl;

                if (imoveis[i]->getTipoNegocio() == 'A' || imoveis[i]->getTipoNegocio() == 'a')
                    cout << "\t\t Disponivel para aluguel" << endl;
                else if (imoveis[i]->getTipoNegocio() == 'V' || imoveis[i]->getTipoNegocio() == 'v')
                    cout << "\t\t Disponivel para venda" << endl;

                cout << "\t\t Valor: R$" << imoveis[i]->getValor() << endl;
                encontrou++;
            }else{
                cout.precision(2);
                cout << fixed;

                cout << "\t\t[" << i+1 << "]\t"  << imoveis[i]->getTitulo() << endl;

                cout << "\t\t Endereco: " << imoveis[i]->getEndereco() << endl;

                cout << "\t\t Area: " << imoveis[i]->getArea() << "m2" << endl;

                if (imoveis[i]->getTipoNegocio() == 'A' || imoveis[i]->getTipoNegocio() == 'a')
                    cout << "\t\t Disponivel para aluguel" << endl;
                else if (imoveis[i]->getTipoNegocio() == 'V' || imoveis[i]->getTipoNegocio() == 'v')
                    cout << "\t\t Disponivel para venda" << endl;

                cout << "\t\t Valor: R$" << imoveis[i]->getValor() << endl;
                encontrou++;
            }
        cout << endl;
        }
        if(i == (tamanho-1) && encontrou == 0){
        cout << "\n\t\tIMOVEL NAO ENCONTRADO!!" << endl;
        }
    }

}

void BuscaPreco(vector<Imovel*> imoveis, double preco)
{
    int encontrou = 0;
    unsigned int tamanho = imoveis.size();
    for(unsigned int i = 0; i < tamanho; i++){
        if(imoveis[i]->getValor()<=preco){
            if(imoveis[i]->getTipoImovel() == 1){
                cout.precision(2);
                cout << fixed;

                cout << "\t\t[" << i+1 << "]\t"  << imoveis[i]->getTitulo() << endl;

                cout << "\t\t Endereco: " << imoveis[i]->getEndereco() << endl;

                cout << "\t\t Numero de pavimentos: " << imoveis[i]->getPavimentos() << endl;

                cout << "\t\t Numero de quartos: " << imoveis[i]->getQuartos() << endl;

                cout << "\t\t Area do terreno: " << imoveis[i]->getAreaTerreno() << "m2" << endl;

                cout << "\t\t Area construida: " << imoveis[i]->getAreaConstruida() << "m2" << endl;

                if (imoveis[i]->getTipoNegocio() == 'A' || imoveis[i]->getTipoNegocio() == 'a'){
                cout << "\t\t Disponivel para aluguel" << endl;
                }else if (imoveis[i]->getTipoNegocio() == 'V' || imoveis[i]->getTipoNegocio() == 'v'){
                cout << "\t\t Disponivel para venda" << endl;}

                cout << "\t\t Valor: R$" << imoveis[i]->getValor() << endl;
                encontrou++;
            }else if(imoveis[i]->getTipoImovel() == 2){
                cout.precision(2);
                cout << fixed;

                cout << "\t\t[" << i+1 << "]\t"  << imoveis[i]->getTitulo() << endl;

                cout << "\t\t Endereco: " << imoveis[i]->getEndereco() << endl;

                cout << "\t\t Andar: " << imoveis[i]->getAndar() << endl;

                cout << "\t\t Numero de quartos: " << imoveis[i]->getQuartos() << endl;

                cout << "\t\t Numero de vagas na garagem: " << imoveis[i]->getVagasGaragem() << endl;

                cout << "\t\t Area: " << imoveis[i]->getArea() << "m2" << endl;

                cout << "\t\t Posicao: " << imoveis[i]->getPosicao() << endl;

                cout << "\t\t Valor do condominio: R$" << imoveis[i]->getValorCondominio() << endl;

                if (imoveis[i]->getTipoNegocio() == 'A' || imoveis[i]->getTipoNegocio() == 'a')
                    cout << "\t\t Disponivel para aluguel" << endl;
                else if (imoveis[i]->getTipoNegocio() == 'V' || imoveis[i]->getTipoNegocio() == 'v')
                    cout << "\t\t Disponivel para venda" << endl;

                cout << "\t\t Valor: R$" << imoveis[i]->getValor() << endl;
                encontrou++;
            }else{
                cout.precision(2);
                cout << fixed;

                cout << "\t\t[" << i+1 << "]\t"  << imoveis[i]->getTitulo() << endl;

                cout << "\t\t Endereco: " << imoveis[i]->getEndereco() << endl;

                cout << "\t\t Area: " << imoveis[i]->getArea() << "m2" << endl;

                if (imoveis[i]->getTipoNegocio() == 'A' || imoveis[i]->getTipoNegocio() == 'a')
                    cout << "\t\t Disponivel para aluguel" << endl;
                else if (imoveis[i]->getTipoNegocio() == 'V' || imoveis[i]->getTipoNegocio() == 'v')
                    cout << "\t\t Disponivel para venda" << endl;

                cout << "\t\t Valor: R$" << imoveis[i]->getValor() << endl;
                encontrou++;
            }
        cout << endl;
        }
        if(i == (tamanho-1) && encontrou == 0){
        cout << "\n\t\tIMOVEL NAO ENCONTRADO!!" << endl;
        }
    }

}

void CadastraCasa(vector<Imovel*> &imoveis)
{
    string t, l, b, cep, c;
    int n, p, q;
    double v, aT, aC;
    char tN;

    cout << "\t\t Titulo: ";
    cin.ignore();
    getline(cin, t);

    cout << "\t\t Logradouro: ";
    getline(cin, l);

    cout << "\t\t Numero: ";
    cin >> n;

    cout << "\t\t Bairro: ";
    cin.ignore();
    getline(cin, b);

    cout << "\t\t Cidade: ";
    getline(cin, c);

    cout << "\t\t CEP: ";
    getline(cin, cep);

    cout << "\t\t Numero de pavimentos: ";
    cin >> p;

    cout << "\t\t Numero de quartos: ";
    cin >> q;

    cout << "\t\t Area do terreno: ";
    cin >> aT;

    cout << "\t\t Area construida: ";
    cin >> aC;

    cout << "\t\t Tipo de negocio (A/a para aluguel ou V/v para venda): ";
    cin >> tN;

    cout << "\t\t Valor: ";
    cin >> v;

    Casa *casa = new Casa(t, l, b, cep, c, n, v, tN, p, q, aT, aC);

    imoveis.push_back(casa);
}

void CadastraApartamento(vector<Imovel*> &imoveis)
{
    string t, l, b, cep, c, p;
    int n, an, q, vG;
    double v, vC, ar;
    char tN;

    cout << "\t\t Titulo: ";
    cin.ignore();
    getline(cin, t);

    cout << "\t\t Logradouro: ";
    getline(cin, l);

    cout << "\t\t Numero: ";
    cin >> n;

    cout << "\t\t Bairro: ";
    cin.ignore();
    getline(cin, b);

    cout << "\t\t Cidade: ";
    getline(cin, c);

    cout << "\t\t CEP: ";
    getline(cin, cep);

    cout << "\t\t Andar: ";
    cin >> an;

    cout << "\t\t Numero de quartos: ";
    cin >> q;

    cout << "\t\t Numero de vagas na garagem: ";
    cin >> vG;

    cout << "\t\t Area: ";
    cin >> ar;

    cout << "\t\t Posicao: ";
    cin.ignore();
    getline(cin, p);

    cout << "\t\t Valor do condominio: ";
    cin >> vC;

    cout << "\t\t Tipo de negocio (A/a para aluguel ou V/v para venda): ";
    cin >> tN;

    cout << "\t\t Valor: ";
    cin >> v;

    Apartamento *apartamento = new Apartamento(t, l, b, cep, c, n, v, tN, ar, vC, q, an, vG, p);

    imoveis.push_back(apartamento);
}

void CadastraTerreno(vector<Imovel*> &imoveis)
{
    string t, l, b, cep, c, p;
    int n;
    double v, a;
    char tN;

    cout << "\t\t Titulo: ";
    cin.ignore();
    getline(cin, t);

    cout << "\t\t Logradouro: ";
    getline(cin, l);

    cout << "\t\t Numero: ";
    cin >> n;

    cout << "\t\t Bairro: ";
    cin.ignore();
    getline(cin, b);

    cout << "\t\t Cidade: ";
    getline(cin, c);

    cout << "\t\t CEP: ";
    getline(cin, cep);

    cout << "\t\t Area: ";
    cin >> a;

    cout << "\t\t Tipo de negocio (A/a para aluguel ou V/v para venda): ";
    cin >> tN;

    cout << "\t\t Valor: ";
    cin >> v;

    Terreno *terreno = new Terreno(t, l, b, cep, c, n, v, tN, a);

    imoveis.push_back(terreno);
}

void ExibeCasa(Imovel* casa)
{
    cout.precision(2);
    cout << fixed;

    cout << "\t\t\t " << casa->getTitulo() << endl;

    cout << "\t\t Endereco: " << casa->getEndereco() << endl;

    cout << "\t\t Numero de pavimentos: " << casa->getPavimentos() << endl;

    cout << "\t\t Numero de quartos: " << casa->getQuartos() << endl;

    cout << "\t\t Area do terreno: " << casa->getAreaTerreno() << "m2" << endl;

    cout << "\t\t Area construida: " << casa->getAreaConstruida() << "m2" << endl;

    if (casa->getTipoNegocio() == 'A' || casa->getTipoNegocio() == 'a')
        cout << "\t\t Disponivel para aluguel" << endl;
    else if (casa->getTipoNegocio() == 'V' || casa->getTipoNegocio() == 'v')
        cout << "\t\t Disponivel para venda" << endl;

    cout << "\t\t Valor: R$" << casa->getValor() << endl;
}

void ExibeApartamento(Imovel* apartamento)
{
    cout.precision(2);
    cout << fixed;

    cout << "\t\t\t " << apartamento->getTitulo() << endl;

    cout << "\t\t Endereco: " << apartamento->getEndereco() << endl;

    cout << "\t\t Andar: " << apartamento->getAndar() << endl;

    cout << "\t\t Numero de quartos: " << apartamento->getQuartos() << endl;

    cout << "\t\t Numero de vagas na garagem: " << apartamento->getVagasGaragem() << endl;

    cout << "\t\t Area: " << apartamento->getArea() << "m2" << endl;

    cout << "\t\t Posicao: " << apartamento->getPosicao() << endl;

    cout << "\t\t Valor do condominio: R$" << apartamento->getValorCondominio() << endl;

    if (apartamento->getTipoNegocio() == 'A' || apartamento->getTipoNegocio() == 'a')
        cout << "\t\t Disponivel para aluguel" << endl;
    else if (apartamento->getTipoNegocio() == 'V' || apartamento->getTipoNegocio() == 'v')
        cout << "\t\t Disponivel para venda" << endl;

    cout << "\t\t Valor: R$" << apartamento->getValor() << endl;
}

void ExibeTerreno(Imovel* terreno)
{
    cout.precision(2);
    cout << fixed;

    cout << "\t\t\t " << terreno->getTitulo() << endl;

    cout << "\t\t Endereco: " << terreno->getEndereco() << endl;

    cout << "\t\t Area: " << terreno->getArea() << "m2" << endl;

    if (terreno->getTipoNegocio() == 'A' || terreno->getTipoNegocio() == 'a')
        cout << "\t\t Disponivel para aluguel" << endl;
    else if (terreno->getTipoNegocio() == 'V' || terreno->getTipoNegocio() == 'v')
        cout << "\t\t Disponivel para venda" << endl;

    cout << "\t\t Valor: R$" << terreno->getValor() << endl;
}

void SalvaDados(vector<Imovel*> imoveis)
{
    ofstream arquivo;
    arquivo.open("imoveis.txt");

    if(!arquivo.is_open()){
        cout << "Nao foi possivel abrir o arquivo." << endl;
    }

    unsigned int tamanho = imoveis.size(); //a chamada da função size() no for é custosa, é mais recomendável que se crie uma variável com o seu valor
    for(unsigned int i = 0; i < tamanho; i++){

        arquivo.precision(2);
        arquivo << fixed;
        arquivo << " " << imoveis[i]->getTitulo() << endl;
        arquivo << imoveis[i]->getTipoImovel() << endl;
        arquivo << imoveis[i]->getLogradouro() << endl;
        arquivo << imoveis[i]->getBairro() << endl;
        arquivo << imoveis[i]->getCidade() << endl;
        arquivo << imoveis[i]->getNumero() << endl;
        arquivo << imoveis[i]->getCEP() << endl;
        arquivo << imoveis[i]->getTipoNegocio() << endl;
        arquivo << imoveis[i]->getValor() << endl;

        switch(imoveis[i]->getTipoImovel()){
            case 1: //SIGNIFICANDO QUE É CASA
                arquivo << imoveis[i]->getAreaTerreno() << endl;
                arquivo << imoveis[i]->getAreaConstruida() << endl;
                arquivo << imoveis[i]->getPavimentos() << endl;
                arquivo << imoveis[i]->getQuartos() << endl;
                break;

            case 2: //SIGNIFICANDO QUE É UM APTO, PEGAR OS ATRIBUTOS DOS APARTAMENTOS
                arquivo << imoveis[i]->getPosicao() << endl;
                arquivo << imoveis[i]->getVagasGaragem() << endl;
                arquivo << imoveis[i]->getValorCondominio() << endl;
                arquivo << imoveis[i]->getArea() << endl;
                arquivo << imoveis[i]->getAndar() << endl;
                arquivo << imoveis[i]->getQuartos() << endl;
                break;

            case 3: //SIGNIFICANDO QUE É UM TERRENO
                arquivo << imoveis[i]->getArea() << endl;
                break;
        }
    }
    arquivo.close();
}

vector<Imovel*> LeArquivo(){
    vector<Imovel*> imoveis;
    ifstream arquivo;
    arquivo.open("imoveis.txt");
    if(!arquivo.is_open()) cout << "Impossivel ler o arquivo" << endl;

    // ATRIBUTOS
    string titulo,cepe,rua,bairro,cidade,posicao;
    int quartos,pavimentos,andar,numero,vagasGaragem;
    double areas,areaconstruida;
    int tipoImov;
    char tNegocio;
    double value,valorCondominio;

    arquivo.ignore();
    while(!(arquivo.bad() || arquivo.eof() || arquivo.fail())){
        getline(arquivo,titulo);
        arquivo >> tipoImov;
        arquivo.ignore();
        getline(arquivo,rua);
        getline(arquivo,bairro);
        getline(arquivo,cidade);
        arquivo >> numero;
        arquivo.ignore();
        getline(arquivo,cepe);
        arquivo >> tNegocio;
        arquivo >> value;

        switch(tipoImov){
            case 1:
                arquivo >> areas;
                arquivo >> areaconstruida;
                arquivo >> pavimentos;
                arquivo >> quartos;
                imoveis.push_back(new Casa(titulo,rua,bairro,cepe,cidade,numero,value,tNegocio,pavimentos,quartos,areas,areaconstruida));
                break;

            case 2:
                arquivo >> posicao;
                arquivo >> vagasGaragem;
                arquivo >> valorCondominio;
                arquivo >> areas;
                arquivo >> andar;
                arquivo >> quartos;
                imoveis.push_back(new Apartamento(titulo,rua,bairro,cepe,cidade,numero,value,tNegocio,areas,valorCondominio,quartos,andar,vagasGaragem,posicao));
                break;
            case 3:
                arquivo >> areas;
                imoveis.push_back(new Terreno(titulo, rua, bairro, cepe, cidade, numero, value, tNegocio, areas));
                break;
        }
        arquivo.ignore();
        arquivo.ignore();
    }

    arquivo.close();
    return imoveis;
}

int main()
{
    vector<Imovel*> imoveis = LeArquivo();

    while(1)
    {
        MenuPrincipal();
        cout << "\t\t Digite uma opcao: ";
        int opcao, tipoImovel, tipoBusca, indice;
        string bairro, cidade, titulo, novoTitulo;
        double preco,novoValor,novoValorCond;
        cin >> opcao;

        switch(opcao)
        {
            case 1:
                MenuTipoImovel();
                cout << "\t\t Digite uma opcao: ";
                cin >> tipoImovel;
                cout << endl;

                if(tipoImovel == 1){
                    CadastraCasa(imoveis);
                }
                else if(tipoImovel == 2){
                    CadastraApartamento(imoveis);
                }
                else{
                    CadastraTerreno(imoveis);
                }
                break;

            case 2:
                {
                cout << endl;
                unsigned int tamanho = imoveis.size();
                for(unsigned int i = 0; i < tamanho; i++){
                    if(imoveis[i]->getTipoImovel() == 1)
                        ExibeCasa(imoveis[i]);
                    else if(imoveis[i]->getTipoImovel() == 2)
                        ExibeApartamento(imoveis[i]);
                    else
                        ExibeTerreno(imoveis[i]);
                    cout << endl;
                }
                cout << "\t\t [" <<tamanho << "] " <<  "IMOVEIS CADASTRADOS"<< endl;
                break;
                }
            case 3:
                {
                    MenuBuscarImovel();
                    cout << "\t\t Digite uma opcao: ";
                    cin >> tipoBusca;
                    cout << endl;

                    switch(tipoBusca)
                    {
                        case 1:
                        {
                            cout << "\t\t Digite o bairro: ";
                            cin.ignore();
                            getline(cin, bairro);
                            BuscaBairro(imoveis, bairro);
                            break;
                        }
                            case 2:
                                {
                                cout << "\t\t Digite a cidade: ";
                                cin.ignore();
                                getline(cin, cidade);
                                BuscaCidade(imoveis, cidade);
                                break;
                            }
                            case 3:
                                {
                                cout << "\t\t Digite o titulo: ";
                                cin.ignore();
                                getline(cin, titulo);
                                BuscaTitulo(imoveis, titulo);
                                break;
                            }
                            case 4:
                                {
                                cout << "\t\t Digite o preco do imovel: ";
                                cin >> preco;
                                BuscaPreco(imoveis, preco);
                                break;
                                }

                        break;
                    }
                    break;
                }

            case 4:
                {
                    cout << "\n\t\t Digite o titulo: ";
                    cin.ignore();
                    getline(cin, titulo);
                    cout << endl;
                    BuscaTitulo(imoveis, titulo);
                    cout << "\n\t\t Digite o indice do imovel a ser editado: ";
                    cin >> indice;
                    unsigned int tamanho = imoveis.size();
                    for(unsigned int k = 0; k < tamanho; k++){
                        if((k+1) == indice){
                            if(imoveis[k]->getTipoImovel()==1 || imoveis[k]->getTipoImovel()==3){
                                MenuEdita();
                                cout << "\n\t\t Digite uma opcao: ";
                                cin >> opcao;
                                    if(opcao == 1){
                                        cout << "\n\t\t Digite o novo titulo do imovel: ";
                                        cin.ignore();
                                        getline(cin, novoTitulo);
                                        imoveis[k]->setTitulo(novoTitulo);
                                        cout << "\n\t\t TITULO ALTERADO COM SUCESSO!" << endl;
                                        break;
                                    }else{
                                        cout << "\n\t\t Digite o novo valor do imovel: ";
                                        cin >> novoValor;
                                        imoveis[k]->setValor(novoValor);
                                        cout << "\n\t\t VALOR DO IMOVEL ALTERADO COM SUCESSO!" << endl;
                                        break;}
                            }else{
                                MenuEdita2();
                                cout << "\n\t\t Digite uma opcao: ";
                                cin >> opcao;
                                    if(opcao == 1){
                                        cout << "\n\t\t Digite o novo titulo do imovel: ";
                                        cin.ignore();
                                        getline(cin, novoTitulo);
                                        imoveis[k]->setTitulo(novoTitulo);
                                        cout << "\n\t\t TITULO ALTERADO COM SUCESSO!" << endl;
                                        break;
                                    }else if(opcao == 2){
                                        cout << "\n\t\t Digite o novo valor do imovel: ";
                                        cin >> novoValor;
                                        imoveis[k]->setValor(novoValor);
                                        cout << "\n\t\t VALOR DO IMOVEL ALTERADO COM SUCESSO!" << endl;
                                        break;
                                    }else{
                                        cout << "\n\t\t Digite o novo valor do imovel: ";
                                        cin >> novoValorCond;
                                        imoveis[k]->setValorCondominio(novoValorCond);
                                        cout << "\n\t\t VALOR DO CONDOMINIO ALTERADO COM SUCESSO!" << endl;
                                        break;}
                                break;
                            }
                            break;
                        }
                    }
                    break;
                }

            case 5:{
                    cout << "\n\t\t Digite o titulo: ";
                    cin.ignore();
                    getline(cin, titulo);
                    cout << endl;
                    BuscaTitulo(imoveis, titulo);
                    cout << "\n\t\t Digite o indice do imovel a ser removido: ";
                    cin >> indice;

                    unsigned int tamanho = imoveis.size();
                    for(unsigned int j = 1; j <= tamanho; j++){
                        if(j == indice){
                            imoveis.erase(imoveis.begin()+(j-1));
                            cout << "\n\t\t IMOVEL REMOVIDO COM SUCESSO!" << endl;
                        }else{
                            break;}
                    }
                    break;
            }
            case 6:
                    SalvaDados(imoveis);
                    cout << endl << "\t\t DADOS SALVOS" << endl;
                    break;

            case 7:
                return 0;

            default:
                cout << "\t\t Opcao invalida." << endl;
                break;
        }
    }

    unsigned int tamanho = imoveis.size();
    for (unsigned int i = 0; i < tamanho; i++){
        delete imoveis[0];
    }

    return 0;
}
