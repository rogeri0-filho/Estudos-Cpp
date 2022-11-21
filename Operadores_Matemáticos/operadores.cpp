#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int a = 5, b = 2;

    int soma = a + b;
    cout << "Soma: " << soma << endl;
    //cout << "Soma: " << a + b << endl;

    int sub = a - b;
    cout << "Subtracao: " << sub << endl;

    int mult = a * b;
    cout << "Multiplicacao: " << mult << endl;

    int quocdiv = a / b;
    cout << "Quociente da Divisao: " << quocdiv << endl;

    int moddiv = a % b;
    cout << "Modulo da Divisao: " << moddiv << endl;

    float div = (float) a / (float) b;
    cout << "Divisao exata: " << div << endl;

    float pot = pow(a, b);
    cout << "Potencia: " << pot << endl;

    return 0;
}
