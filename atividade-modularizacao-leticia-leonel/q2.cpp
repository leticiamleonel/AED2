//Aluna:Letícia Leonel
#include <iostream>
using namespace std;

//Declaração das funções
float converter(float C)
{
   float F;
   F = C * 1.8 + 32;
   return F;

}

//principal
int main()
{
    float F, C;

    cout << "Informe a temperatura em Celsius: ";
    cin >> C;
    F = converter(C);
    cout << "Temperatura em Fahrenheit: " << F;

    return 0;
}
