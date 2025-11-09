// Lab_05_3.cpp 

#include <iostream> 
#include <cmath> 

using namespace std;

double f(const double x);

int main()
{
    double gp, gk, z;
    int n;

    cout << "gp = "; cin >> gp;
    cout << "gk = "; cin >> gk;
    cout << "n  = "; cin >> n;

    double dg = (gk - gp) / n;

    double g = gp;


    while (g <= gk)
    {
        z = f(2 * g) + pow(f((g * g + 1)), 2);
        cout << g << "  " << z << endl;
        g += dg;
    }

    return 0;
}

double f(const double x)
{
    if (abs(x) >= 1)
        return ((sin(2 * x) + 1) / (sin(x) + pow(cos(x), 2)));
    else
    {
        double S = 0;
        int j = 0;
        //double a=1;
        double R = 4;
        S = R;
        do
        {
            j++;
            R = (pow(x, 4)) / ((2 * j + 1) * 2 * j);
            //a *= R;
            S += R;
        } while (j < 7);
        return S;
    }
}

