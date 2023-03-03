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

    //realizando o cadastro
    cout << "Informe a matricula: " << endl;
    cin >> p1.matricula;

    cout << "Informe o seu nome: " << endl;
    cin >> p1.nome;

    cout << "Informe sua idade: " << endl;
    cin >> p1.idade;

    cout << "Informe o numero da conta: " << endl;
    cin >> p1.conta.numero;

    cout << "Informe o tipo de conta(poupanca/corrente): " << endl;
    cin >> p1.conta.tipo;

    cout << "Informe o saldo da conta: " << endl;
    cin >> p1.conta.saldo;

    //mostrando os dados:
    cout << "Matricula: " << p1.matricula << "  Nome: " << p1.nome << "  Idade: " << p1.idade << endl;
    cout << "Numero da conta: " << p1.conta.numero << "  Tipo de conta: " << p1.conta.tipo << "  Saldo: " << p1.conta.saldo << endl;

    return 0;
}
