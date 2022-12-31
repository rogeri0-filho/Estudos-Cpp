// Programa principal

#include <iostream>
#include "carro.h"

using namespace std;


int main(){

    carro polo(2022, 95000, 50000);

    cout << "Polo:" << endl;
    cout << "Ano - " << polo.getano() << endl;
    cout << "Km - " << polo.getkm() << endl;
    cout << "Valor - " << polo.getvalor() << endl;

    system("pause");

    return 0;
}

//g++ main_carro.cpp carro.cpp -o teste.exe