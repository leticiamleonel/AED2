//Aluna: Let�cia leonel
#include <iostream>

using namespace std;

int main()
{
    float valorl, din, l;

    cout << "Informe o valor do litro de combustivel: ";
    cin >> valorl;

    cout << "Informe quanto em dinheiro deseja abastecer: ";
    cin >> din;

    //f�mula

    l = din / valorl;

    cout << "Voce colocara em seu carro: " << l << " litros.";

    return 0;
}

