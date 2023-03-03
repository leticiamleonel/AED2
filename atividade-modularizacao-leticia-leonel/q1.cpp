//Aluna:Letícia Leonel
#include <iostream>
using namespace std;

//função
int func(int x)
{
    x = (2 * x) + 4;
    return x;
}

//procedimento
void resultfunc(int x)
{
    for(int x = 0; x <= 20; x++)
    {
        x = func(x);
        cout << "O resultado e: " << x << endl;
    }
}

//principal
int main()
{
    int  x;

    resultfunc(x);

    return 0;
}


