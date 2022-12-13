#include <iostream>

using namespace std;

int main(){
    float gast_familia[5], media_gast = 0;

    for (int i = 0; i < 5; i++){
        cout << "Digite os gasto da " << i+1 << "a familia: ";
        cin >>  gast_familia[i];
    }

    for (int i = 0; i < 5; i++){
        media_gast += gast_familia[i];
    }
    media_gast /= 5;

    cout << "Media de gastos: " << media_gast << endl;

    for (int i = 0; i < 5; i++){
        if (gast_familia[i] < media_gast){
            cout << "A familia" << i+1 << "gastou abaixo da media" << endl;
        } else if (gast_familia[i] == media_gast){
            cout << "A familia" << i+1 << "tem gastos na media" << endl;
        } else{
            cout << "A familia" << i+1 << "gastou acima da media" << endl;
        }
    }

    /*
    if (media_gast < gast_familia[0]){
        cout << "A Familia 1 gastou acima da media";
    }else if (media_gast < gast_familia[1]){
        cout << "A Familia 2 gastou acima da media";
    }else if (media_gast < gast_familia[2]){
        cout << "A Familia 3 gastou acima da media";
    }else if (media_gast < gast_familia[3]){
        cout << "A Familia 4 gastou acima da media";
    }else if (media_gast < gast_familia[4]){
        cout << "A Familia 5 gastou acima da media";
    */

    return 0;
}
