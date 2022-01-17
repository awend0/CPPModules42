#include "Point.hpp"

int main(void)
{
    Point a(0.0f, 0.0f), b(0.0f, 5.0f), c(5.0f, 0.0f);

    Point in1(1.0f, 1.0f), in2(2.0f, 2.0f), out1(-1.0f, -2.0f), out2(10.0f, 10.0f);
    Point edge(2.0f, 0.0f), vertex(0.0f, 0.0f);

    std::cout << "in1: " << bsp(a, b, c, in1) << std::endl;
    std::cout << "in2: " << bsp(a, b, c, in2) << std::endl;
    std::cout << "out1: " << bsp(a, b, c, out1) << std::endl;
    std::cout << "out2: " << bsp(a, b, c, out2) << std::endl;
    std::cout << "edge: " << bsp(a, b, c, edge) << std::endl;
    std::cout << "vertex: " << bsp(a, b, c, vertex) << std::endl;
}
