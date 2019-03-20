#include "Vector.hpp"
#include <iostream>
int main()
{
    Vector<double> v{{1., 2., 3.}};
    Vector<double> u{{10., 20., 30.}};
    auto w = (v + std::move(u)) / 2.0;
    std::cout << w[0] << "\n";
}