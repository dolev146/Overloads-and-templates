// overloaded functions
#include <iostream>
using namespace std;

int sum(int a, int b)
{
    return a + b;
}

double sun(double a, double b)
{
    return a + b;
}

template <class SomeType>
SomeType sum(SomeType a, SomeType b)
{
    return a+b;
}

int main()
{
    cout << sun(10, 20) << '\n';
    cout << sum(1.0, 1.5) << '\n';
    // cout << sum("ab", "bc") << '\n';
}
