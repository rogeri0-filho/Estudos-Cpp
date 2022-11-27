#include <iostream>

using namespace std;

int main(){

    int idade;
    float renda;

    cout << "Digite sua idade: ";
    cin >> idade;
    cout << "Digite sua renda: R$";
    cin >> renda;

    if (idade >= 21 && renda <= 1200)
    {
        cout << "Voce esta apto para participar do programa de moradia!";
    } else{
        cout << "voce nao se encaixa nos requisitos para participar do programa!";
    }

    return 0;
}
