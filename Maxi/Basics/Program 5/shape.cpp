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

class PaintCost
{
   public:
    auto get_cost(double area) -> double
    {
        return area * 70;
    }
};

class triangle : public Shape, public PaintCost
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

    double area = rect.get_area();

    std::cout << "Area: " << rect.get_area() << std::endl;

    std::cout << "Paint costs: " << rect.get_cost(area) << "$" << std::endl;

    return 0;
}