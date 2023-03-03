//aluna: Letícia Leonel
#include <iostream>
using namespace std;

//funcao
int num(int n)
{
    int aux;
    aux = n / 2;
    return aux;
}

//principal
int main()
{
    int n, aux;
    while ( n != 0)
    {
        cout << "Digite um numero: " << endl;
        cin >> n;
    }

    aux = num(n);

    if (aux == 0)
    {
        cout << "O numero : " << n << "e par." << endl;
    }
        else
            cout << "O numero: " << n << "e impar." << endl;

    return 0;
}
