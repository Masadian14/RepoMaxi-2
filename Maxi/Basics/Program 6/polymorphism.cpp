#include <cstdint>
#include <iostream> 
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <memory>

class Animal
{
    public:
    virtual void make_noise() const = 0;
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

    void make_noise() const override 
    {
        std::cout<<"miau"<<std::endl;
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

    void make_noise() const override
    {
        std::cout << "kukuk" << std::endl;
    }
};

auto main() -> int
{
    std::vector<std::shared_ptr<Animal>> animals;

    std::srand(std::time(nullptr));

    for (int i = 0; i < 10; ++i) {
        if (std::rand() % 2 == 0) {
            animals.push_back(std::make_shared<cat>());
        } else {
            animals.push_back(std::make_shared<bird>());
        }
    }

    for (auto &itr : animals)
    {
        itr->make_noise();
    }
    return 0;

}