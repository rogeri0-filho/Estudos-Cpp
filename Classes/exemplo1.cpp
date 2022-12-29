/*
 -> Classes são coleções de bibliotecas ou funções;
 -> Dentro das classes, as funções são chamadas de métodos;
 -> As classes em C++ podem ser equiparadas as libs no Python;

 -> Dentro das classes é possível criar e atribuir funções a objetos;
 -> Organizar as classes em arquivos separados torna o código mais limpo e legivel;
*/

#include <iostream>

using namespace std;

class carro{
    private: // -> Variáveis e funções só poderão ser acessadas dentro da própria classe;

    int ano;
    float valor, km;

    public: // -> Variáveis e funções podem ser acessadas através de outras classes ou funções, ou através da função principal

/*
 - Get -> Comando usádo para obter algo; Precisa de um tipo de saída, porém pode ser usádo com um void por não precisar de retorno.
 - Set -> Comando usádo para indicar algo; Precisa de um tipo de saída e retorno.
 - Função construtor -> Objeto criado com funções pré estabelecidas, porém sem a necessidade de uma saída, mas deve ter o mesmo nome da classe.
                        Quando a função construtor é utilizáda, não é necessário passar os valores com o set um por um no programa principal, 
                        basta apenas chamar a função e passar seus parâmetros dentro dela.
*/

//-----Função Construtor----
    carro(int a, float v, float k);

//--------Ano---------------    
    void setano(int a);
    int getano();

//--------Valor-------------
    void setvalor(float v);
    float getvalor();

//---------Km---------------
    void setkm(float k);
    float getkm();
};

int main(){

    carro polo(2022, 95000, 50000);
    //carro -> classe;
    //polo -> Objeto que vai representar a classe;

    cout << "Polo:" << endl;
    cout << "Ano - " << polo.getano() << endl;
    cout << "Km - " << polo.getkm() << endl;
    cout << "Valor - " << polo.getvalor() << endl;
    // getano, getkm e getvalor são funções estabelecidas dentro da classe.

    return 0;
}

//-----Função Construtor----
carro::carro(int a = 0, float v = 0, float k = 0){
    ano = a;
    valor = v;
    km = k;
}

/*
Caso alguma variável de entrada tenha o mesmo nome que a variável da função, bastar utilizar o comando 'this ->' para indicar qual é a variável da classe.
*/

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
