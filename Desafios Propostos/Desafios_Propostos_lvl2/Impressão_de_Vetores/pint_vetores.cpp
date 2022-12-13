#include <iostream>

using namespace std;

int main(){

    int tam_vetor;
    string resp = "";
    
    while (resp != "s")
    {

    cout << "Digite o tamanho do vetor: " ;
    cin >> tam_vetor;

    float* vetor = new float[tam_vetor];

    for (int i = 0; i < tam_vetor; i++){
        cout << "Digite o " << i+1 << "o elemento do vetor: ";
        cin >> vetor[i];
    }

    cout << "Vetor inserido foi: [ ";
    for(int i = 0; i < tam_vetor; i++){
        cout << vetor[i] << " ";
    }
    cout << "]" << endl;

    delete[] vetor;

    cout << "Deseja encerrar o programa? [n][s]";
    cin >> resp;

    if (resp == "s")
        break;
    }
    
    cout << "Fim do programa!";

    return 0;
}