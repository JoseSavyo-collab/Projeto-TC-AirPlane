#include "Cruzeiro.h"

Cruzeiro::Cruzeiro(string Data_de_ida, string Data_de_volta, int TipoDeViagem, int origem, int destino, int cabine, int PacoteLuaDeMel)
    :Produto(Data_de_ida, Data_de_volta, TipoDeViagem, origem, destino){
    Define_Cabine(cabine);
    Define_Distancia_Cruzeiro(destino);
    Calcula_TempoDeViagemCruzeiro();
    Calcula_PrecoDaPassagemCruzeio(cabine, PacoteLuaDeMel);
    this->PacoteLuaDeMel=PacoteLuaDeMel;
}

void Cruzeiro::Define_Cabine(int ECabine){
    switch(ECabine){
        case 0:{
            Cabine="Suíte Comum";
        }break;
        case 1:{
            Cabine="Suíte com Varanda";
        }break;
        case 2:{
            Cabine="Suíte Presidencial";
        }break;
    }
}

void Cruzeiro::set_PacoteLuaDeMel(int PacoteLuaDeMe){
    this->PacoteLuaDeMel=PacoteLuaDeMe;
}

string Cruzeiro::get_Cabine(){
    return Cabine;
}

int Cruzeiro::get_PacoteLuaDeMel(){
    return PacoteLuaDeMel;
}

void Cruzeiro::Define_Distancia_Cruzeiro(int a){
    switch(a){
        case 0:{
            Distancia_Cruzeiro=maritimo_Salvador[a];
        }break;
        case 1:{
            Distancia_Cruzeiro=maritimo_Salvador[a];
        }break;
    }
}

int Cruzeiro::Retorna_Distancia_Cruzeiro(){
    return Distancia_Cruzeiro;
}

void Cruzeiro::Calcula_TempoDeViagemCruzeiro(){
    if(Retorna_Destino()=="Santos"){
        Define_TempoDeViagem("10 dias.");
    }else{
        Define_TempoDeViagem("15 dias.");
    }
}

void Cruzeiro::Calcula_PrecoDaPassagemCruzeio(int escolha, int PacoteLuaDeMel){
    float calc_do_preco = TaxaFixaDeDistancia*Retorna_Distancia_Cruzeiro();
    switch(escolha){
        case 0:{
            calc_do_preco=calc_do_preco+500.0;
        }break;
        case 1:{
            calc_do_preco=calc_do_preco+800.0;
        }break;
        case 2:{
            calc_do_preco=calc_do_preco+1200.0;
        }break;
    }
    if(PacoteLuaDeMel==1){
            calc_do_preco=calc_do_preco+500.0;
        }

    Define_PrecoDaPassagem(calc_do_preco);
}

void Cruzeiro::ImprimirPassagemCruzeiro(){
    ImprimirDadosDaViagem();
    cout<<"\nDistância à ser percorrida: "<<Retorna_Distancia_Cruzeiro()
        <<"\nDuração média da viagem: "<<Retorna_TempoDeViagem()
        <<"\nCabine: "<<get_Cabine()
        <<"\nPreco da passagem: R$ "<<Retorna_PrecoDaPassagem();
}


