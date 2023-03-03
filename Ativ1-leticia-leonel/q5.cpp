//Aluna: Letícia Leonel
#include <iostream>

using namespace std;

int main()
{
    float C, F;

    for (int C=1; C<=100; C++)
    {
    //formula

    F = C * 1.8 + 32;

    cout << "A temperatura em C e: " << C << "graus." << endl;
    cout << "A temperatura em F e: " << F << "graus." << endl;
    }
    return 0;
}
