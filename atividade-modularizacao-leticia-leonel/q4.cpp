//aluna:Letícia Leonel
#include <iostream>
using namespace std;

//função
int mult(int x , int y)
{
    int result;

    result = x % y;

    return result;
}

//principal
int main()
{
    int x, y, result;

    cout << "Digite um valor inteiro para um numerador: " << endl;
    cin >> x;
    cout << "Digite um valor inteiro para um denominador: " << endl;
    cin >> y;

    result = mult(x,y);

    cout << "O resultado e: " << result << endl;

    if (result == 0)
    {
        cout << "Os numero sao multiplos." << endl;
    }
        else
            cout << "Os numeros nao sao multiplos.";
    return 0;
}
