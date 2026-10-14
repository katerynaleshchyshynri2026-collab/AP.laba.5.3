#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double t(const double x);

int main()
{
    double fp, fk;
    int n;
    cout << "fp = "; cin >> fp;
    cout << "fk = "; cin >> fk;
    cout << "n = ";  cin >> n;

    double df = (fk - fp) / n; 

    cout << fixed;
    cout << "+-----------+-------------+" << endl;
    cout << "|" << setw(10) << "f" << " |"
        << setw(12) << "z" << " |" << endl;
    cout << "+-----------+-------------+" << endl;

    for (int i = 0; i <= n; i++)
    {
        double f = fp + i * df;
        double z = t(f * f) + 2 * t(2 * f + 1) + sqrt(t(1));
        cout << "|" << setw(10) << setprecision(4) << f << " |"
            << setw(12) << setprecision(6) << z << " |" << endl;
    }
    cout << "+-----------+-------------+" << endl;
    return 0;
}

double t(const double x)
{
    if (fabs(x) >= 1)
        return (cos(x) + 1) / (exp(x) + sin(x) * sin(x));
    else
    {
        double a = x; 
        double S = a;
        for (int j = 1; j <= 5; j++)
        {
            double R = -x * x / ((2.0 * j) * (2.0 * j + 1));
            a *= R;
            S += a;
        }
        return S;
    }
}
