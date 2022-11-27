# include <iostream>

using namespace std;

int main(){
    float nota1, nota2, nota3, mediat, media_al;

    cout << "Digite a 1a nota: ";
    cin >> nota1;
    cout << "Digite a 2a nota: ";
    cin >> nota2;
    cout << "Digite a 3a nota: ";
    cin >> nota3;
    cout << "Digite a media da turma: ";
    cin >> mediat;

    media_al = (nota1 + nota2 + nota3) / 3;
    cout << "A media do aluno e: " << media_al << endl;

    if (media_al < mediat){
        cout << "O aluno esta ABAIXO da media!";
    } else if (media_al == mediat){
        cout << "O aluno esta na media!";
    } else{
        cout << "O aluno esta ACIMA da media!";
    }


    return 0;
}
