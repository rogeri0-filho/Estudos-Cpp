//Vetores = Lista de elementos do mesmo tipo
//Deve-se declarar o tipo de elementos antes
//Os elementos começam a ser contados a partir do zero

#include <iostream>

using namespace std;

int main(){
//--> Alocação Estática: o programa já sabe a quantidadede elementos no vetor, porque já foram informados
    int vet_1[4];
    vet_1[0] = 5;
    vet_1[1] = 10;
    vet_1[2] = 15;
    vet_1[3] = 20;
//no exemplo acima, os elementos devem ser declarados um a um
//nesse exemplo, caso seja declarado 2 valores, e sobrem outros 2, 
//o espaço dos valores restantes seão ocupados por um valor da memoria aleatório
    
    //cout << vet_1 << endl;

    int vet_2[4] = {2, 4, 6, 8};
//nesse ex, os elementos podem ser declarados diretamente na hora de ciar o vetor
//ainda nesse ex, caso apenas dois valores sejam declarados, os outros dois espaços sobrando viram 0

//caso o vetor seja declarado mas a quantidade de elementos não, o valor vai assumir a quantidade de elementosque forem passados a ele


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

    int x = sizeof(vet_1); //pega a quantidade de bytes dentro do vetor
    int y = sizeof(vet_2);
    int z = sizeof(int);

    int quant_elemn_x = sizeof(vet_1) / sizeof(int);
    //tamanho do vetor / tamanho do tipo da variavel
    int quant_elemn_y = sizeof(vet_2) / sizeof(int);

    cout << "Quantidade de Bytes - Int: " << z << endl;
    cout << "Quantidade de Bytes - 1o Vetor: " << x << endl;
    cout << "Quantidade de Bytes - 2o Vetor: " << y << endl;
    cout << "Quantidade de Elementos - 1o Vetor: " << quant_elemn_x << endl;
    cout << "Quantidade de Elementos - 2o Vetor: " << quant_elemn_y << endl;

// --> Alocação Dinâmica: a rezerva de memoria é feita no tempo de processamento

    int tam_vetor;

    cout << "Digite o tamanho do vetor: " ;
    cin >> tam_vetor;

    int* vetor = new int[tam_vetor];
// Um ponteiro é criado para apontar para o vetor ao qual terá seu tamanho deciodido pelo usuário
// Esse tipo de alocação é chamada de dinânima porque, durante o tempo de execução, é visto o tamanho do vetor
// e o espaço de memória necessário para alocá-lo, e se necessário, ainda durante o tempo de execução esse espaço
// pode ser liberado para outro tipo de uso antes da execução ser terminada.

// Os valores podem ser atribuidos como na alicação estática, um por um manualmente, ou podem ser jogados em um laço para facilitar o trabalho

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
// É de interesse para o usuário, declarar o vetor como um ponteiro, pois, se no meio do programa não existir mais a necessidade de continuar
// usando aquele vetor, basta apenas exclui-lo usando a função delete [], e economizando memoria. No caso dos vetores, a função delete deve ser acompanhada de 
// colchetes para que o programa entenda que o que esta sendo deletado é um vetor.
}
