#include <iostream>

using namespace std;

int main(){
    int matriz[2][3];
    // matriz[linha][coluna]

    matriz[0][0] = 11; //a11
    matriz[0][1] = 12; //a12
    matriz[0][2] = 13; //a13

    matriz[1][0] = 21; //a21
    matriz[1][1] = 22; //a22
    matriz[1][2] = 23; //a23

    for(int i = 0; i < 2; i++){ // Imprime as Linhas
        for(int j = 0; j < 3; j++){ // Imprime as colunas
            cout << "a" << matriz[i][j] << " ";
        }
        cout << endl;
    }



    return 0;
}