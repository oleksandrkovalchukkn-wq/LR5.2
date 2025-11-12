#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double sum(double x, double E, int &n);

int main()
{

    int n = 0;
    double S; // Сума
    double L; // ln(x)
    double x, xp, xk, dx, E; // Параметри

    // Ввід
    cout << "xp ( > 0) = "; cin >> xp;
    cout << "xk (<= 2) = "; cin >> xk;
    cout << "dx = "; cin >> dx;
    cout << "eps = "; cin >> E;

    // Шапка
    cout << fixed << setprecision(7);
    cout << "------------------------------------------------" << endl;
    cout << "|" << setw(10) << "X" << " |"
        << setw(12) << "S(x)" << " |"
        << setw(12) << "ln(x)" << " |"
        << setw(5) << "n" << " |" << endl;
    cout << "------------------------------------------------" << endl;

    // Розгалуження
    for (x = xp; x <= xk; x += dx)
    {
        n = 0;

        S = sum(x, E, n);

        L = log(x);

        cout << "|" << setw(10) << x << " |"
            << setw(12) << S << " |"
            << setw(12) << L << " |"
            << setw(5) << n << " |" << endl;
    }

    // Кінець
    cout << "------------------------------------------------" << endl;

    return 0;
}

double sum(double x, double E, int &n)
{
    double a = x - 1; double S = 0.0;
    n = 1;

    while (abs(a) > E)
    {
        a *= -(x - 1) * ((double)n / (n + 1));

        S += a;
        n++;
    } 

    return S;
}
