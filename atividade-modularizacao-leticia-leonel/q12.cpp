//aluna: Letícia Leonel
#include <iostream>
using namespace std;

int main()
{
    char nome[10], sexo[10];
    int idade[10], n, s, i;

    for(int n = 0; n < 10; n++)
    {
       cout << "Informe seu nome: " << endl;
       cin >> nome[n];
    }
    for(int s = 0; s < 10; s++)
    {
        cout << "Informe seu sexo(F/M): " << endl;
        cin >> sexo[s];
    }
    for(int i = 0; i < 10; i++)
    {
        cout << "Informe sua idade: " << endl;
        cin >> idade[i];
    }

    cout << nome[n] << "----" << sexo[s] << "----" << idade[i] << endl;


    return 0;
}
