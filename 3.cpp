// template arguments
#include <iostream>
using namespace std;

template <class T, int N>
T fixed_multiply(T val)
{
    return val * N;
}

int main()
{
    cout << fixed_multiply<int, 2>(10) << '\n';
    cout << fixed_multiply<int, 3>(10) << '\n';
}