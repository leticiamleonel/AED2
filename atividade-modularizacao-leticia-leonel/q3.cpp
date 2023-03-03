//Aluna:Letícia Leonel
#include <iostream>
using namespace std;

//funcao
int num(int n)
{
    cout << "Informe um número inteiro: " << endl;
    cin >> n;

    return n;
}

//procedimento
void calc(int n)
{
    float s = 0;

    for(float i = 1; i <= n; i++)
    {
        s=(1/i);
    }

}

//principal
int main ()
{
    int n;
    float s;

    n = num(s);
    s = calc(n);

    cout << "O resultado para S e: " << s << endl;

    return 0;
}
