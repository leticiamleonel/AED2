//Aluna: Let�cia Leonel
#include <iostream>

using namespace std;

int main()
{
    float salario, prest, total;


    cout << "Informe o seu salario: ";
    cin >> salario;

    cout << "Informe o valor da prestacao que deseja pagar: ";
    cin >> prest;

    //f�rmula

    total = salario * 0.3;

    if(prest <= total)
        cout << "O emprestimo foi aceito.";
    else
        cout << "O emprestimo nao foi aceito.";


    return 0;
}
