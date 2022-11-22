#include <iostream>

using namespace std;

void menu(){
    cout << "-------------------------------\n";
    cout << "Calculadora em C++ v1.0\nCreated by: Rogerio Filho\nIn 21/11/22\n";
    cout << "-------------------------------\n";
}

/*
int soma(int x, int y){
    int var_1;

    var_1 = x + y;
    
    return var_1;
}

int main(){
    menu();

    int a = 5, b = 4;
    int s = soma(a, b);

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "A soma de a + b vale: "<< s << endl;

    return 0;
}
*/
int soma2(int &x, int &y){
    // Colocando o & antes dos parâmetros da função,
    // tudo o que for alterado na função principal, vai alterar a varialvel que estiver utilizando ela
    
    int somar;
    somar = x + y;
    x = 30;

    return somar;
}

int main(){
    menu();

    int a = 5, b = 4;
    int s = soma2(a, b);

    cout << "valor de a alterado  = " << a << endl;
    cout << "b = " << b << endl;
    cout << "A soma de a + b vale: "<< s << endl;

    return 0;
}
