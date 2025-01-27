#include <iostream>
#include <vector>
#include <iomanip>
#include <queue>
#include <ctime>

using namespace std;

#include "Produto.cpp"
#include "Onibus.cpp"
#include "Aviao.cpp"
#include "Cruzeiro.cpp"
#include "GeradorDePassagens.cpp"

int main(){

    /*SOMENTE AS VIAGENS DE �NIBUS EST�O SENDO EXECUTADAS*/

    GeradorDePassagens ger;

    setlocale(LC_ALL, "portuguese");

    int Tipo_de_viagem;
    string Data_de_ida, registro;
    string Data_de_volta;
    int Origem;
    int Destino;
    int Cabine;
    int PacoteLuaDeMel;
    int escolha;

    int opc;

while(1){
    cout<<"Voc� �?"
        <<"\n0-Cliente"
        <<"\n1-Funcion�rio"<<endl;
        cin>>opc;

    if(opc==0){

        cout<<"Agende sua passagem!";
        cout<<"\nSOMENTE AS VIAGENS DE �NIBUS EST�O SENDO EXECUTADAS!";
        cout<<"\nDigite o tipo de viagem!"
            <<"\n0-�nibus"
            <<"\n1-avi�o"
            <<"\n2-Cruzeiro\n";
            cin>>Tipo_de_viagem;

                cout<<"Digite a data de partida: "<<endl;
                cin>>Data_de_ida;
                cout<<"Digite a data de volta: "<<endl;
                cin>>Data_de_volta;

                if(Tipo_de_viagem!=2){
                cout<<"Escolha a origem de sua viagem!"
                    <<"\n0-Bras�lia"
                    <<"\n1-Florian�polis"
                    <<"\n2-Jo�o Pessoa"
                    <<"\n3-Manaus"
                    <<"\n4-S�o Paulo"<<endl;
                    cin>>Origem;


                    do{
                        cout<<"Escolha o destino de sua viagem!"
                        <<"\n0-Aracaj�"
                        <<"\n1-Bel�m"
                        <<"\n2-Belo Horizonte"
                        <<"\n3-Boa vista"
                        <<"\n4-Bras�lia"<<endl;
                        cin>>Destino;

                    }while(Origem==0 && Destino==4);
                }else{
                    Origem=0;

                    cout<<"Escolha o destino de sua viagem!"
                        <<"\n0-Santos"
                        <<"\n1-Rio Grande"<<endl;
                        cin>>Destino;
                }
                    switch(Tipo_de_viagem){
                        case 0:{
                            cout<<"\nEscolha a classe de viagem"
                                <<"\n0-Classe econ�mica"
                                <<"\n1-Classe executiva"<<endl;
                                cin>>escolha;

                            Onibus func1(Data_de_ida, Data_de_volta, Tipo_de_viagem, Origem, Destino, escolha);
                            ger.AgendandoPassagemOnibus(func1);
                            func1.ImprimirPassagemOnibus();
                            system("Pause");
                        }
                        case 1:{
                            Aviao func2(Data_de_ida, Data_de_volta, Tipo_de_viagem, Origem, Destino, escolha);
                            ger.AgendandoPassagemAviao(func2);
                            func2.ImprimirPassagemAviao();
                            system("Pause");

                        }break;
                        case 2:{
                            cout<<"\nEscolha sua cabine"
                                <<"\n0-Su�te comum"
                                <<"\n1-Su�te com varanda"
                                <<"\n2-Su�te presidencial";
                                cin>>Cabine;

                            cout<<"Adicionar o pacote de lua de mel?"
                                <<"\n0-N�o"
                                <<"\n1-Sim";
                                cin>>PacoteLuaDeMel;

                                Cruzeiro SerieB(Data_de_ida, Data_de_volta, Tipo_de_viagem, Origem, Destino, Cabine, PacoteLuaDeMel);
                                ger.AgendandoPassagemCruzeiro(SerieB);
                                SerieB.ImprimirPassagemCruzeiro();
                                system("pause");

                        }break;
                    }

    }else if(opc = 1){
        cout<<"Digite o registro: ";
        cin>>registro;
        ger.CancelarPassagem(registro);
    }


}
return 0;
}
