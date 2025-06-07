#include <iostream>
using namespace std;
int main()
{

    int nota;

    cout << "NOTA DE EXAMEN" << endl
         << endl;

    cout << "Ingrese la nota:";
    cin >> nota;

    if (nota >= 90 )
        cout << "EXELENTE" << endl;

    else if (nota >= 75)
        cout << "BUENA" << endl;

    else if (nota >= 60)
        cout << "REGULAR" << endl;
    else
    cout << "MALA" << endl;

    return 0;
}