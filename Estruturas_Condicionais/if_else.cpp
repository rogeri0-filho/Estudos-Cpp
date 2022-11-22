#include <iostream>

using namespace std;

int main(){

    float nota1 = 0, nota2 = 0;

    cout << "Digite a Primeira nota: ";
    cin >> nota1;

    cout << "Digite a Segunda nota: ";
    cin >> nota2;

    float media = (nota1 + nota2) / 2;

    cout << "A media do aluno e igual a: " << media << endl;
/*
    if(media >= 6){
        cout << "O aluno está aprovado!";

    } else if(media <= 5.9){
        cout << "O aluno esta reprovado!";

    }
*/
    // 0 -> 2.5 = D; 2.5 -> 5 = C; 5 -> 7.5 = B; 7.5 - > 10 = A;

    if(media < 2.5){
        cout << "Nota final: D!\nO aluno esta REPROVADO!\n";

    } else if(media < 5){
        cout << "Nota final: C!\nConsultar o conselho de classe!\n";

    } else if(media < 7.5){
        cout << "Nota final: B!\nO aluno esta APROVADO!\n";

    } else{
        cout << "Nota final: A!\nO aluno foi aprovado com exito!\n";
    }

    return 0;
}
