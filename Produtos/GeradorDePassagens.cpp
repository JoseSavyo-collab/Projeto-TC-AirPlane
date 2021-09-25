#include "GeradorDePassagens.h"

GeradorDePassagens::GeradorDePassagens(){

}

void GeradorDePassagens::AgendandoPassagemOnibus(Onibus x){
    PassagensOnibus.push_back(x);
}

void GeradorDePassagens::AgendandoPassagemAviao(Aviao x){
    PassagensAviao.push_back(x);
}

void GeradorDePassagens::AgendandoPassagemCruzeiro(Cruzeiro x){
    PassagensCruzeiro.push_back(x);
}

void GeradorDePassagens::CancelarPassagem(string x){
    int controle=0;

    /*if(x[0]=='A'){
        for(unsigned i(0); i<PassagensAviao.size(); i++){
            if(x == PassagensAviao[i].){
                PassagensAviao[i].ImprimirPassagemAviao();
                break;
            }
        }
    }
    else if(x[0]=='O'){
        for(unsigned i(0); i<CancelarPassagem.empty(); i++){
            if(x == CancelarPassagem[i]){
                PassagensOnibus[i].ImprimirPassagemOnibus();
                controle++;
            }
        }
    }else{
        for(unsigned i(0); i<CancelarPassagem.empty(); i++){
            if(x == CancelarPassagem[i]){
                PassagensCruzeiro[i].ImprimirPassagemCruzeiro();
                controle++;
            }
        }
    }*/

}

