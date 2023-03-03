//aluna: Letícia Leonel
#include <iostream>
using namespace std;

//funcao
float tempo(float seg)
{
    cout << "Digite os segundos: " << endl;
    cin >> seg;

    return seg;
}

//principal
int main()
{
    float seg, minut, hr;

    seg = tempo(seg);

    //minutos
    minut = seg / 60;

    //horas
    hr = seg / 3600;

    cout << "Segundos: " << seg << ", minutos: " << minut << " e horas: " << hr << endl;

    return 0;
}
