//aluna: Letícia Leonel
#include <iostream>
using namespace std;

//estrutura
struct Tconsumo
{
    string nome;
    float potencia;
    int horas;
};

//principal
int main()
{
    Tconsumo vetElet[2], i;
    int dias, soma;

    for(int i = 0; i < 2; i++)
    {
        cout << "Informe o nome do eletrodomestico: " << endl;
        cin >> vetElet[i].nome;

        cout << "Informe a potencia do eletrodomestico: " << endl;
        cin >> vetElet[i].potencia;

        cout << "Informe as horas de uso do eletrodomestico: " << endl;
        cin >> vetElet[i].horas;
    }

    cout << "Por quantos dias deseja verificar o consumo? " << endl;
    cin >> dias;


    for(int i = 0; i < 2; i++)
    {
        soma = soma + vetElet[i].potencia;
        cout << "A soma é: " << soma << endl;
    }

    cout << "O consumo de cada um é: " << vetElet[i].potencia << endl;

    return 0;
}
