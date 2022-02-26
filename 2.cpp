// function template
#include <iostream>
using namespace std;

template <class T>
T sum(T a, T b)
{
    T result;
    result = a + b;
    return result;
}

template <class T, class U>
bool are_equal(T a, U b)
{
    return (a == b);
}

int main()
{
    int i = 5, j = 6, k;
    double f = 2.0, g = 0.5, h;
    k = sum<int>(i, j);
    h = sum<double>(f, g);
    // same as
    // k = sum(i, j);
    // h = sum(f, g);
    cout << k << '\n';
    cout << h << '\n';

    if (are_equal(10, 10.0))
        cout << "x and y are equal\n";
    else
        cout << "x and y are not equal \n";
}