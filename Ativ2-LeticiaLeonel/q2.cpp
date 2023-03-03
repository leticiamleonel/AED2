//aluna: letícia leonel
#include <iostream>
using namespace std;

//estruturas
struct Tconta
{
  int numero;
  string tipo;
  int saldo;
};

struct Tcliente
{
    int matricula;
    string nome;
    int idade;
    Tconta conta;
};

//principal
int main()
{
    //variaveis para cadastro
    Tcliente p1;
    Tcliente vetPessoas[10], i;

    //realizando o cadastro
    for(int i = 0; i < 10; i++)
    {
        cout << "Informe a matricula: " << endl;
        cin >> vetPessoas[i].matricula;

        cout << "Informe o seu nome: " << endl;
        cin >> vetPessoas[i].nome;

        cout << "Informe sua idade: " << endl;
        cin >> vetPessoas[i].idade;

        cout << "Informe o numero da conta: " << endl;
        cin >> vetPessoas[i].conta.numero;

        cout << "Informe o tipo de conta(poupanca/corrente): " << endl;
        cin >> vetPessoas[i].conta.tipo;

        cout << "Informe o saldo da conta: " << endl;
        cin >> vetPessoas[i].conta.saldo;

    }

    //mostrando os dados:
    cout << "Matricula: " << vetPessoas[i].matricula << "  Nome: " << vetPessoas[i].nome << "  Idade: " << vetPessoas[i].idade << endl;
    cout << "Numero da conta: " << vetPessoas[i].conta.numero << "  Tipo de conta: " << vetPessoas[i].conta.tipo << "  Saldo: " << vetPessoas[i].conta.saldo << endl;

    return 0;
}
