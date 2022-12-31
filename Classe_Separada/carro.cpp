// Apenas como as funções funcionam

#include <iostream>
#include "carro.h" // biblioteca criada pelo usuário é chamada com "" ao invés de <>

using namespace std;

//-----Função Construtor----
carro::carro(int a = 0, float v = 0, float k = 0){
    ano = a;
    valor = v;
    km = k;
}

//--------Ano---------------
void carro::setano(int a){
    ano = a;
} int carro::getano(){
    return ano;
}

//--------Valor-------------
void carro::setvalor(float v){
    valor = v;
} float carro::getvalor(){
    return valor;
}

//---------Km---------------
void carro::setkm(float k){
    km = k;
} float carro::getkm(){
    return km;
}
