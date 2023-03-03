//aluna: Letícia Leonel
#include <iostream>
using namespace std;

//funcao
int fatorial(int i)
{
    int aux, n;

   for(i = 1 ; i <= n ; i++)
   {
        aux *= i;
   }
    return aux;
}

//principal
int main()
{
    int n, i, aux = 1, fat;

    cout << "Fatorial de: ";
    cin >> n;
    fat = fatorial(aux);
    cout << "Fatorial: " << fat << endl;

    return 0;
}
