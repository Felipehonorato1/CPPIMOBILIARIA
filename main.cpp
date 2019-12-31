#include "Endereco.h"
#include "Casas.h"
#include <iostream>
#include <string.h>

#define N 50

using namespace std;

void ExibeMenu(){
    cout << "====================================================================================" << endl;
    cout << "[1] CADASTRAR IMOVEL " << endl;
    cout << "[2] LISTAR IMOVEIS " << endl;
    cout << "[3] PESQUISAR IMOVEL " << endl;
    cout << "[4] EDITAR IMOVEL " << endl;
    cout << "[5] REMOVER IMOVEL" << endl;
    cout << "[6] SAIR " << endl; 
    cout << "====================================================================================" << endl;
}

void CadastraTipoImovel(){
    cout << "====================================================================================" << endl;
    cout << "[1] CASA" << endl;
    cout << "[2] APARTAMENTO" << endl;
    cout << "[3] LOTE" << endl;
    cout << "====================================================================================" << endl;  
}

int main(){
    int op,tpd,iterCasa = 0;
    tpd = op = iterCasa;
    Casas casas[N];
    Endereco h;
    string endSave;
    int numSave;

        ExibeMenu();
        cout << "Selecione uma opcao: " << endl;
        cin >> op;
        switch(op){
            case 1:
                CadastraTipoImovel();
                cout << "Selecione o tipo de imovel: " << endl;
                cin >> tpd;
                switch(tpd){
                    case 1: 
                    cout << "Digite o nome da rua: " << endl;
                    cin >> endSave;
                    h.setRua(endSave);
                    cout << "Digite o nome do bairro: " << endl;
                    cin >> endSave;
                    h.setBairro(endSave);
                    cout << "Digite o nome da cidade: " << endl;
                    cin >> endSave;
                    h.setCidade(endSave);
                    cout << "Digite o numero: "<< endl;
                    cin >> endSave;
                    h.setNumero(numSave);
                    cout << "Digite o CEP: "<< endl;
                    cin >> endSave;
                    h.setCep(endSave);
                    casas[iterCasa].setEndereco(h);
                    
                    cout << casas[iterCasa].end.getRua << endl;
                    cout << casas[iterCasa].end.getBairro << endl;
                    cout << casas[iterCasa].end.getCidade << endl;
                    cout << casas[iterCasa].end.getNumero << endl;
                    


                    
                    
                    
                    

                    





                    

                }

            }

    return 0;
}   