//aluna: Letícia Leonel
#include <iostream>
using namespace std;

//estruturas
struct Tfim
{
    int hr;
    int minut;
};

struct Tinicio
{
    int hr;
    int minut;
};

struct Thorario
{
    Tinicio inicio;
    Tfim fim;
};

struct Tdata
{
    int dia;
    int mes;
    int ano;
};

struct Tevento
{
    string nome;
    Tdata data;
    Thorario horario;
    string descricao;
};

struct Tagenda
{
    Tevento evento;
};


//principal
int main()
{
    Tagenda vetC[10], i;

    for(int i = 0; i <10; i++)
    {
        cout << "Informe o nome do evento: " << endl;
        cin >> vetC[i].evento.nome;

        cout << "Informe a descrição do evento: " << endl;
        cin >> vetC[i].evento.descricao;

        cout << "Informe a data do evento(dia): " << endl;
        cin >> vetC[i].evento.data.dia;

        cout << "Informe a data do evento(mes): " << endl;
        cin >> vetC[i].evento.data.mes;

        cout << "Informe a data do evento(ano): " << endl;
        cin >> vetC[i].evento.data.ano;

        cout << "Informe o horario do evento(inicio/horas): " << endl;
        cin >> vetC[i].evento.horario.inicio.hr;

        cout << "Informe o horario do evento(inicio/minutos): " << endl;
        cin >> vetC[i].evento.horario.inicio.minut;

        cout << "Informe o horario do evento(fim/horas): " << endl;
        cin >> vetC[i].evento.horario.fim.hr;

        cout << "Informe o horario do evento(fim/minut): " << endl;
        cin >> vetC[i].evento.horario.fim.minut;
    }

    return 0;
}
