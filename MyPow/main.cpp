#include <stdio.h>
#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
class Solution
{
public:
    double myPow(double x, int n)
    {
        long long Mult = n;
        if (Mult < 0)
        {
            x = 1 / x;
            Mult = -Mult;
        }

        double Resultado = 1.0;

        while (Mult > 0)
        {
            if (Mult % 2 == 1)
            {
                Resultado *= x;
            }
            x *= x;
            Mult /= 2;
        }
        std::cout << std::fixed << std::setprecision(5);
        cout << Resultado << endl;
        return Resultado;
    }
};
int main()
{
    Solution sol;
    double x;
    int n;
    cin >> x >> n;
    double multi = sol.myPow(x, n);

    return 0;
}