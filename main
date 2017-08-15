#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int testy, ile, suma;
    double ciastka, *czas, doba = 86400, suma2;

    cin >> testy;

    for(int i = 0; i < testy; i++)
    {
        suma2 = suma = 0;

        cin >> ile;

        czas = new double [ile];

        cin >> ciastka;

        for (int i = 0; i < ile; i++)
        {
            cin >> czas[i];
            suma += doba / czas[i];
        }

        suma2 = suma;

        cout << ceil(suma2 / ciastka) << endl;

        delete [] czas;
        czas=NULL;
    }


    return 0;
}
