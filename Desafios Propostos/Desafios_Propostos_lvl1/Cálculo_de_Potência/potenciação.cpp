#include <iostream>

using namespace std;

int main(){
    int base, expo, calc, i = 1;
    string resp = "";

    while (resp != "s")
    {
    
    cout << "Digite o valor da base: ";
    cin >> base;
    cout << "Digite o valor do expoente: ";
    cin >> expo;

    for (i; i <= expo; i++){
        calc = base *= expo;
    }

    cout << "Resultado: " << calc << endl;
    cout << "Deseja encerrar o programa? [n][s]";
    cin >> resp;

    if (resp == "s")
        break;
    }
    cout << "Fim do programa!";

    return 0;
}
