#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int tests, gluttons, intSum;
    double cookies, *time, day = 86400, doubleSum;

    cin >> tests;

    for(int i = 0; i < tests; i++){
        cin >> gluttons;
        cin >> cookies;

		time = new double [gluttons];
		doubleSum = intSum = 0;

        for (int i = 0; i < gluttons; i++){
            cin >> time[i];
            intSum += day / time[i];
        }

        doubleSum = intSum;

        cout << ceil(doubleSum / cookies) << endl;

        delete [] time;
        time=NULL;
    }


    return 0;
}
