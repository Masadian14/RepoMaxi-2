#include <cstdint>
#include <iostream> 
#include <string>

class Animal
{

};

class bird;

class cat : public Animal
{
    public:

    void operator+(const cat &)
    {
        std::cout << "Katze" << std::endl;
    }

    void operator+(const bird &)
    {
        std::cout << "Katzenvogel" << std::endl;
    }

};

class bird : public Animal
{
     public:

    void operator+(const bird &)
    {
        std::cout << "Vogel" << std::endl;
    }

    void operator+(const cat &)
    {
        std::cout << "Vogelkatze" << std::endl;
    }
};

auto main() -> int
{
    cat Paul;
    cat Marius;
    bird Sultan;
    bird Luca;

    Paul + Marius;
    Paul + Sultan;
    Sultan + Luca;
    Sultan + Marius;

    return 0;

}