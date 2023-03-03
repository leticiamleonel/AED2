//Aluna: Letícia Leonel
#include <iostream>

using namespace std;

int main()
{
    int val, soma, n;
    for(int n=1; n<=5; n++)
    {
        cout << "Digite um numero: ";
        cin >> n;
    }

    if (n >= 100 || n <= 200)
        cout << "Os numeros entre 100 e 200 sao: " << n << endl;
        else
            cout << "Nenhum numero entre 100 e 200 foi digitado.";



    return 0;
}
