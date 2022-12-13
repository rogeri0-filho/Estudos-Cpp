#include <iostream>

using namespace std;

void troca(int *&pont_1, int *&pont_2){
    int temp;
    temp = *pont_1;
    *pont_1 = *pont_2;
    *pont_2 = temp;

}

int main(){
    int *pont_1 = new int;
    *pont_1 = 10;
    int *pont_2 = new int;
    *pont_2 = 8;

    cout << "Ponteiro 1: \nEndereco - " << pont_1 << "; Valor - " << *pont_1 << endl;
    cout << "Ponteiro 2: \nEndereco - " << pont_2 << "; Valor - " << *pont_2 << endl; 

    troca (pont_1, pont_2); 

    cout << "Ponteiro 1: \nNovo endereco - " << pont_1 << "; Novo valor - " << *pont_1 << endl;
    cout << "Ponteiro 2: \nNovo endereco - " << pont_2 << "; Novo valor - " << *pont_2 << endl; 

    return 0;
}