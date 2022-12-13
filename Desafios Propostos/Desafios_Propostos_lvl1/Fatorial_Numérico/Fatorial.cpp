#include <iostream>

using namespace std;

int main(){
    int cont;
    int fact = 1;

    cout << "Qual numero voce deseja fatorar? ";
    cin >> cont;
    
    while (cont > 0)
    {
        cout << cont << "";
        if(cont > 1)
        {
            cout << " x ";
        }else
        {
            cout << " = " << "";
        }
        fact *= cont;
        cont -= 1;
    }

    cout << fact;
    cout << "\nFim da fatoracao!";
    
    return 0;
}
