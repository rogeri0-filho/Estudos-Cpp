/*
ponteiros = variáveis

variável que armazena uma endereço de outra variável
é possivel acessar essa variável através do seu endereço

o tipo de variável a qual o ponteiro vai acessar tambem deve ser declarado 

Quando um ponteiro é atribuido a uma variável, é reservado um espaço da memórioa para armazenar esse valor
Quando um ponteiro é criado e nenhum valor é atribuido, um endereço aleátorio da memória é usado para o armazenar 

Para evitar o problema citado, o ideal seria fazer o ponteiro apontar para o vazio
*/

#include <iostream>
#include <cstddef>

using namespace std;

int main(){
    int var_1; // Variável
    int* pont_1; // Ponteiro

    var_1 = 5;
    pont_1 =& var_1; // =& faz o ponteiro armazenar o endereço da variável desejada

    cout << "Variavel (atraves do nome): " << var_1 << endl;
    cout << "Enderco de memoria do ponteiro: " << pont_1 << endl;
    cout << "Variavel (atraves do ponteiro): " << *pont_1 << endl;

    int var_2;
    var_2 = var_1; // Variável 2 recebe o valor da variável 1
    var_2 = *pont_1; // Variável 2 recebe o endereço armazenado pelo ponteiro 1

    cout << "Nova variavel (recebendo a variavel 1): " << var_2 << endl;

    var_1 = 30; // Variável 1 passa a valer trinta através de atribuição direta
    *pont_1 = 30; // Variável passa a valer trinta através do ponteiro

    cout << "Novo valor (atribuido a variavel antiga): " << *pont_1 << endl;

    int var_3 = 50;
    pont_1 =& var_3; // Ponteiro 1 passa a receber o valor da variável 3

    cout << "Novo valor do ponteiro: " << *pont_1 << endl;


/* 
//Por algum motivo ainda não descoberto por mim, os códigos a partir da linha 42 apresentam
// erro de execução graças a essa parte comentada.

    int* pont_2; // Novo ponteiro
    pont_2 = NULL; // Ponteiro 2 é apontado para o vazio;

    cout << "Valor do novo ponteiro: " << *pont_2 << endl;
*/


    int* pont_3 = new int; // Novo ponteiro é criado e ja tem seu valor declarado e aponta para um endereço de memória
    // Porém aponta para uma variável sem nome. Só é possível acessá-lo pelo ponteiro 
    *pont_3 = 35;

    // Caso o ponteiro seja trocado, o valor da memória é perdido e não é mais possível acessá-lo

    cout << "Valor do 3o ponteiro (Memoria): "  << pont_3 << endl; //Endereço da memória
    cout << "Valor do 3o ponteiro (Valor real): "  << *pont_3 << endl; //Valor apontado pelo ponteiro

    *pont_3 = *pont_1; // Ponteiro 3 recebe o VALOR ao qual o ponteiro 1 aponta
    //delete pont_3; // O valor antido é deletado e o vazamento de memória é evitado
    //pont_3 = pont_1; // Ponteiro 3 recebe o ENDEREÇO ao qual o ponteiro 1 aponta

    cout << "Novo valor do 3o ponteiro: " << *pont_3 << endl;


    return 0;
}
