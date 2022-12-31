// apenas as funções com argumentos e tipos de saída

class carro{
    private:
    int ano;
    float valor, km;

    public:
//-----Função Construtor----
    carro(int a, float v, float k);

//--------Ano---------------    
    void setano(int a);
    int getano();

//--------Valor-------------
    void setvalor(float v);
    float getvalor();

//---------Km---------------
    void setkm(float k);
    float getkm();
};
