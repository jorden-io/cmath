#include <iostream>
namespace math
{
    struct number
    {
        int n;
        int operator!()
        {
            for (int i = n; i != 0; i--)
            {
                n *= i;
            };
            return n;
    };
        friend std::ostream &operator<<(std::ostream &out, math::number &n)
        {
            out << n.n;
            return out;
        };
    };
    double cubed(double n);
    double sqrt(double n);
    double sqrd(double n);
    double ln(double x);
    double log10(double n);
    int s(int i, int n, int t, int sum);
    int &factorial(int n);
};