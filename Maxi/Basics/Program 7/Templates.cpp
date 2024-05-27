/*#include <cmath>
#include <iostream>
#include <type_traits>

template <typename T>

auto my_max(T par_x, T par_y) -> T 
{
    return (par_x > par_y) ? par_x : par_y;
}

template <typename T>
auto equal(const T par_x, const T par_y, const T eps) -> T
{
    bool result = abs(par_x - par_y) < eps;
    return result;
}

auto main() -> int
{
    std::cout << my_max<int>(3,4) << std::endl;

    std::cout << "gleich = 1 / ungleich = 0 : " << equal<float>(4, 3.5, 1) << std::endl;
}