#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "Func.h"

using namespace std;

int main()
{
    double x, y, z;

    cout << "Enter x = ";
    cin >> x;

    cout << "Enter y = ";
    cin >> y;

    cout << "Enter z = ";
    cin >> z;

    try
    {
        double A = CalculateA(x, y);
        double B = CalculateB(x, z);

        int A_int = static_cast<int>(A);
        double C = CalculateC(A_int, B);

        cout << fixed << setprecision(3);

        cout << "A = " << A << endl;
        cout << "B = " << B << endl;
        cout << "C = " << C << endl;
    }
    catch (const invalid_argument& error)
    {
        cout << "Error: " << error.what() << endl;
    }

    return 0;
}
