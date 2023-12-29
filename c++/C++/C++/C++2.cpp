#include <iostream>
#define pi 3.14
int main()
{
    float r, m, a;
    std::cin >> r;
    m = pi * r * r;
    a = 2 * pi * r;
    std::cout << "perimeter=" << m << std::endl << "area=" << a;
}
