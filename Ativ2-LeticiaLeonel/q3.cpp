//aluna: letícia leonel
#include <iostream>
using namespace std;

//estruturas
struct notasA
{
    int av1;
    int av2;
    int av3;
};

struct cursoAluno
{
    int matricula;
    string nome;
    notasA notas;
};

//principal
int main()
{
    //variaveis de armazenamento
    cursoAluno vetAluno[2], i;
    int maior;

    //armazenando na memoria

    for(int i = 0; i < 2; i++)
    {
        cout << "Informe a matricula do aluno: ";
        cin >> vetAluno[i].matricula;

        cout << "Informe o nome do aluno: ";
        cin >> vetAluno[i].nome;

        cout << "Informe as notas da avaliação 1 do aluno: ";
        cin >> vetAluno[i].notas.av1;

        cout << "Informe as notas da avaliação 2 do aluno: ";
        cin >> vetAluno[i].notas.av2;

        cout << "Informe as notas da avaliação 3 do aluno: ";
        cin >> vetAluno[i].notas.av3;
    }

        //retornando a maior nota

        maior = vetAluno.notas.av1[0];

        for(int i = 0; i < 2; i++)
        {
            if(vetAluno.notas.av1[i] > maior )
            {
                maior = vetAluno.notas.av1[i];
                cout << "A maior nova é: " << maior;
            }
        }


    return 0;
}
