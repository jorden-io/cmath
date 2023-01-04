#include <iostream>
namespace math
{
    double cubed(double n)
    {
        return n * n * n;
    };
    double sqrt(double n)
    {
        if (n == 0 || n == 1)
        {
            return n;
        }

        int start = 1, end = 1000;

        while (start + 1 < end)
        {
            int mid = start + (end - start) / 2;
            if (mid == n / mid)
            {
                return mid;
            }
            else if (mid > n / mid)
            {
                end = mid;
            }
            else
            {
                start = mid;
            }
        }
        return start;
    }
    double sqrd(double n)
    {
        return n * n;
    };
    double ln(double x)
    {
        double old_sum = 0.0;
        double xmlxpl = (x - 1) / (x + 1);
        double xmlxpl_2 = xmlxpl * xmlxpl;
        double denom = 1.0;
        double frac = xmlxpl;
        double term = frac;
        double sum = term;

        while (sum != old_sum)
        {
            old_sum = sum;
            denom += 2.0;
            frac *= xmlxpl_2;
            sum += frac / denom;
        }
        return 2.0 * sum;
    }
    double log10(double n)
    {
        double LN10 = 2.3025850929940456840179914546844;
        return math::ln(n) / LN10;
    };
    int s(int i, int n, int t, int sum)
    {
        while (i <= n)
        {
            i = i + 1;
            sum = sum + t;
        };
        return sum;
    };
    int &factorial(int n)
    {
        for (int i = n; i != 0; i--)
        {
            n *= i;
        };
        return n;
    };
    struct number
    {
        int n;
        void operator!();
        friend std::ostream &operator<<(std::ostream &out, math::number &n)
        {
            out << n.n;
            return out;
        };
    };
    void math::number::operator!()
    {
        for (int i = n; i != 0; i--)
        {
            n *= i;
        };
        std::cout << n << "\n";
        return;
    };
};
int main(){};