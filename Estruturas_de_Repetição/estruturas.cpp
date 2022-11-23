#include <iostream>

using namespace std;

int main(){
    int n;
    cout << "Digite um numero inteiro positivo: ";
    cin >> n;

    int soma = 0;
    int cont = 1;

/* ->ex 1:
    while (cont <= n){
        soma += cont;
        cont += 1;
    }
    cout << "A soma de 0 ate " << n << " sao: " << soma;
*/

/*
// Usando essa lógica, caso o usuário digite o valor 0, a contagem erra
// pois o loop já se inicia recebendo o valor 1. Isso aconte porque o a soma vem antes do loop.
// ou seja, ela irá acontecer independente de qualquer coisa, o que não aconteceria com o while normal.
    do{
        soma += cont;
        cont += 1;  
    } while (cont <= n);

    cout << "A soma de 0 ate " << n << " sao: " << soma;
*/

for (int c = 0; c <= n; c +=1){
    soma += c;

    }

    cout << "A soma de 0 ate " << n << " sao: " << soma;

/* -> TESTE
// Usando laços de repetição sem as chaves, só será válida, a primeira linha após o laço

for (int c = 0; c <= n; c +=1)
    soma += c;
    cout << "Teste\n";


cout << "A soma de 0 ate " << n << " sao: " << soma;
*/

    return 0;
}
