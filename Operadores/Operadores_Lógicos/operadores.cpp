#include <iostream>

using namespace std;

// E - &&; OU - ||; NÃO - !

int main(){

    float nota1 = 0, nota2 = 0;

    cout << "Digite a Primeira nota: ";
    cin >> nota1;

    cout << "Digite a Segunda nota: ";
    cin >> nota2;

    float media = (nota1 + nota2) / 2;

    cout << "A media do aluno e igual a: " << media << endl;

    // 0 -> 2.5 = D; 2.5 -> 5 = C; 5 -> 7.5 = B; 7.5 - > 10 = A;

    if(media < 2.5){
        cout << "Nota final: D!\n";

    } else if(media < 5){
        cout << "Nota final: C!\n";

    } else if(media < 7.5){
        cout << "Nota final: B!\n";

    } else{
        cout << "Nota final: A!\n";
    }

    float freq;
    cout << "Digite a frequencia do aluno: ";
    cin >> freq;
/*
    if (media >= 5 && freq >= 75){
        cout << "O Aluno foi APROVADO!";
    } else{
        cout << "O Aluno foi REPROVADO!";
    } 
*/

/*
    if (media < 5 || freq < 75){
        cout << "O Aluno foi REPROVADO!";
    } else{
        cout << "O Aluno foi APROVADO!";
    }
*/

    //Operador Ternário
    (media >= 5 && freq >= 75) ? cout << "Aprovado" : cout << "Reprovado";

    return 0;
}
