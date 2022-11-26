#include <iostream>

using namespace std;

//f(x) = x^2 - 3x + 5

float f(float x ){
    float valor;
    valor = x*x - 3*x + 5;

    return valor;
}


int main(){
    float ent;

    cout << "Digite o valor de X (Sendo X pertencente aos reais R): ";
    cin >> ent;

    float valorf = f(ent);

    cout << "O resultado da fucao e: " << valorf;

    return 0;
}
