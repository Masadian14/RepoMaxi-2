#include <cstdint>
#include <iostream>

class Shape
{
    public: 
    void set_width(int8_t width_in)
    {
        width_ = width_in;
    }
    void set_height(int8_t height_in)
    {
        height_ = height_in;
    }

    protected:
    int8_t width_;
    int8_t height_;
};

class triangle : public Shape 
{
    public:
    auto get_area() -> int32_t
    {
        return (0.5 * (width_ * height_));
    }
};

auto main () -> int
{
    triangle rect;

    rect.set_width(5);
    rect.set_height(7);

    std::cout << "Area: " << rect.get_area() << std::endl;

    return 0;
}