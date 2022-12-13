#include <iostream>

using namespace std;


int main(){
    int *pont_1 = new int;
    int *pont_2 = new int;
    // Ponteiros 1 e 2 é criado sem ter 
    // uma variável atribuida a ele, porém 
    // com um endereço de memória

    int a;
    int b;
    int media;

    cout << "Idade 1: ";
    cin >> a;
    cout << "Idade 2: ";
    cin >> b;

    *pont_1 = a;
    *pont_2 = b;
    // Ponteiros 1 e 2 são apontados para duas variáveis, 
    // após elas receberem seus respectivos valores pelo usuário

    media = *pont_1 / *pont_2;
    // Ponteiros são divididos 

    cout << "Media das idades : " << media;

    return 0;

}
int main(){
    int *idade_1 = new int;
    int *idade_2 = new int;
    float *media = new float;

    cout << "Digite a 1a idade: ";
    cin >> *idade_1;
    cout << "Digite a 2a idade: ";
    cin >> *idade_2;

    *media = (*idade_1 + *idade_2) / 2;
    cout << "Media das idades: " << *media;
    return 0;
}