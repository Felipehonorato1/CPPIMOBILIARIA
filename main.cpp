#include <iostream>
#include "Casa.h"
#include "Apartamento.h"
#include "Terreno.h"
#include <vector>
#include <fstream>

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

void CadastraCasa(vector<Imovel> &imoveis)
{
    string l, b, cep, c;
    int n, p, q;
    double v, aT, aC;
    char t;
    Casa casa;

    cout << "\t\t Logradouro: ";
    cin.ignore();
    getline(cin, l);

    cout << "\t\t Numero: ";
    cin >> n;

    cout << "\t\t Bairro: ";
    cin.ignore();
    getline(cin, b);

    cout << "\t\t Cidade: ";
    cin.ignore();
    getline(cin, c);

    cout << "\t\t CEP: ";
    cin.ignore();
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
    cin >> t;

    cout << "\t\t Valor: ";
    cin >> v;

    casa = Casa(l, b, cep, c, n, v, t, p, q, aT, aC);

    imoveis.push_back(casa);
}

void CadastraApartamento(vector<Imovel> &imoveis)
{
    string l, b, cep, c, p;
    int n, an, q, vG;
    double v, vC, ar;
    char t;
    Apartamento apartamento;

    cout << "\t\t Logradouro: ";
    cin.ignore();
    getline(cin, l);

    cout << "\t\t Numero: ";
    cin >> n;

    cout << "\t\t Bairro: ";
    cin.ignore();
    getline(cin, b);

    cout << "\t\t Cidade: ";
    cin.ignore();
    getline(cin, c);

    cout << "\t\t CEP: ";
    cin.ignore();
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
    cin >> t;

    cout << "\t\t Valor: ";
    cin >> v;

    apartamento = Apartamento(l, b, cep, c, n, v, t, ar, vC, q, an, vG, p);

    imoveis.push_back(apartamento);
}

void CadastraTerreno(vector<Imovel> &imoveis)
{
    string l, b, cep, c, p;
    int n;
    double v, a;
    char t;
    Terreno terreno;

    cout << "\t\t Logradouro: ";
    cin.ignore();
    getline(cin, l);

    cout << "\t\t Numero: ";
    cin >> n;

    cout << "\t\t Bairro: ";
    cin.ignore();
    getline(cin, b);

    cout << "\t\t Cidade: ";
    cin.ignore();
    getline(cin, c);

    cout << "\t\t CEP: ";
    cin.ignore();
    getline(cin, cep);

    cout << "\t\t Area: ";
    cin >> a;

    cout << "\t\t Tipo de negocio (A/a para aluguel ou V/v para venda): ";
    cin >> t;

    cout << "\t\t Valor: ";
    cin >> v;

    terreno = Terreno(l, b, cep, c, n, v, t, a);

    imoveis.push_back(terreno);
}

void SalvaDados(vector<Imovel> imoveis)
{
    // TESTE SALVANDO ARQUIVOS.
    ofstream file;
    arquivo.open("imoveis.txt");
    
    if(!arquivo){
        cout << "Nao foi possivel abrir o arquivo." << endl;
    }

    for(int i=0;i < imoveis.size() ; i++){
        arquivo << imoveis[i].getEndereco() << endl;
        arquivo << imoveis[i].getTipoNegocio() << endl;
        arquivo << imoveis[i].getValor() << endl;
        


    }
    
    
}

    // FIM DO TESTE KKKKK

int main()
{
    vector<Imovel> imoveis;

    while(1)
    {
        MenuPrincipal();
        cout << "\t\t Digite uma opcao: ";
        int opcao, tipoImovel;
        cin >> opcao;

        if(opcao == 7)
        {
            SalvaDados();
            break;
        }

        switch(opcao)
        {
            case 1:
                MenuTipoImovel();
                cout << "\t\t Digite uma opcao: ";
                cin >> tipoImovel;

                if (tipoImovel == 1){
                    CadastraCasa(imoveis);
                }
                else if (tipoImovel == 2){
                    CadastraApartamento(imoveis);
                }
                else{
                    CadastraTerreno(imoveis);
                }
                break;
        }
    }

    return 0;
}
