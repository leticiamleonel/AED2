//aluna: Letícia Leonel
#include <iostream>
using namespace std;

//funcao
int valor(int maior[])
{
    int i, maximo;
    maximo = maior[0];
    i = 1;

    while (i < 20)
    {
        if(maximo < maior[i])
        {
            maximo = maior[i];
        }
        i = i + 1;
    }

    return maximo;
}

//principal
int main()
{
    int num[20], i;
    i = 0;

    while(i < 20)
    {
        cout << "Informe o valor de 20 numeros inteiros: " << endl;
        cin >> num[i];
        i = i + 1;
    }
    cout << "O maior numero e: " << valor(num) << endl;

    return 0;
}
