#include "Func.h"
#include <cmath>
#include <stdexcept>

using namespace std;

// Завдання 1
double CalculateA(double x, double y)
{
    double p = fabs(x - 1) - cbrt(fabs(y));
    double q = 1 + x / 2 + y / 4;

    if (p < 0 || q == 0)
        throw invalid_argument("ODZ error A");

    return sqrt(p) / q;
}

double CalculateB(double x, double z)
{
    if (fabs(cos(z)) < 1e-12)
        throw invalid_argument("ODZ error B");

    double pi = acos(-1.0);

    return x * (tan(z) + exp(-(x - 3)))
         + pow(cos(180 * pi / 180), 2);
}

// Завдання 2
double CalculateC(int A, double B)
{
    return pow(A, 2) - 2 * B;
}
