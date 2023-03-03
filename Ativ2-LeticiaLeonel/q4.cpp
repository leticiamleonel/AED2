//aluna: letícia leonel
#include <iostream>
using namespace std;

//estruturas
struct minhaData
{
    int dia;
    int mes;
    int ano;
};

//principal
int main()
{
    //variaveis
    minhaData vetDia[2], vetMes[2], vetAno[2];
    int total;

    //armazenamento
    for(int i = 0; i < 2; i++)
    {
        cout << "Informe duas datas(dia): " << endl;
        cin >> vetDia.dia;
    }
     for(int i = 0; i < 2; i++)
    {
        cout << "Informe duas data(mes): " << endl;
        cin >> vetMes.mes;
    }
     for(int i = 0; i < 2; i++)
    {
        cout << "Informe duas dada(ano): " << endl;
        cin >> vetAno.ano;
    }


    //calculando

    total = vetDia[0] - vetDia[1]
    cout << "O resultado é: " << total << endl;


    return 0;
}
