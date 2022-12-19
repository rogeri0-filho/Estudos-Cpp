#include <iostream>

using namespace std;

int main(){
--> Alocação Estática
    int vet_1[4];
    vet_1[0] = 5;
    vet_1[1] = 10;
    vet_1[2] = 15;
    vet_1[3] = 20;
    
    //cout << vet_1 << endl;

    int vet_2[4] = {2, 4, 6, 8};

    //cout << vet_2 << endl;

// Printando todos os elementos do vetor1:
    cout << "1o Vetor: ";
    for (int i = 0;  i < 4; i++){
        cout << vet_1[i] << " ";
    }
    cout << endl;

//--------------------------------------

// Printando todos os elementos do vetor2:
        cout << "2o Vetor: ";
    for (int i = 0;  i < 4; i++){
        cout << vet_2[i] << " ";
    }
    cout << endl;

//--------------------------------------

    int x = sizeof(vet_1);
    int y = sizeof(vet_2);
    int z = sizeof(int);

    int quant_elemn_x = sizeof(vet_1) / sizeof(int);
    int quant_elemn_y = sizeof(vet_2) / sizeof(int);

    cout << "Quantidade de Bytes - Int: " << z << endl;
    cout << "Quantidade de Bytes - 1o Vetor: " << x << endl;
    cout << "Quantidade de Bytes - 2o Vetor: " << y << endl;
    cout << "Quantidade de Elementos - 1o Vetor: " << quant_elemn_x << endl;
    cout << "Quantidade de Elementos - 2o Vetor: " << quant_elemn_y << endl;

// --> Alocação Dinâmica

    int tam_vetor;

    cout << "Digite o tamanho do vetor: " ;
    cin >> tam_vetor;

    int* vetor = new int[tam_vetor];

    for(int i = 0; i < tam_vetor; i++){
        cout << "Digite o " << i+1 << "o elemento do vetor: ";
        cin >> vetor[i];
    }

    cout << "[ ";
    for(int i = 0; i < tam_vetor; i++){
        cout << vetor[i] << " ";
    }
    cout << "]";

    return 0;
}
