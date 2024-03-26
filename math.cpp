// Author: Samuel Parente
// Exercise: C++ Math

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
    double x = 1;
    double y = 3.0;

    // Absolute value
    std::cout << "abs(x) = " << std::abs(x) << std::endl;

    // Arccosine
    std::cout << "acos(x) = " << std::acos(x) << std::endl;

    // Arcsine
    std::cout << "asin(x) = " << std::asin(x) << std::endl;

    // Arctangent
    std::cout << "atan(x) = " << std::atan(x) << std::endl;

    // Cube root
    std::cout << "cbrt(x) = " << std::cbrt(x) << std::endl;

    // Ceiling (rounding up)
    std::cout << "ceil(x) = " << std::ceil(x) << std::endl;

    // Cosine
    std::cout << "cos(x) = " << std::cos(x) << std::endl;

    // Hyperbolic cosine
    std::cout << "cosh(x) = " << std::cosh(x) << std::endl;

    // Exponential
    std::cout << "exp(x) = " << std::exp(x) << std::endl;

    // exp(x) - 1
    std::cout << "expm1(x) = " << std::expm1(x) << std::endl;

    // Positive difference
    std::cout << "fdim(x, y) = " << std::fdim(x, y) << std::endl;

    // Floor (rounding down)
    std::cout << "floor(x) = " << std::floor(x) << std::endl;

    // Hypotenuse
    std::cout << "hypot(x, y) = " << std::hypot(x, y) << std::endl;

    // Fused multiply-add
    std::cout << "fma(x, y, z) = " << std::fma(x, y, 1.0) << std::endl;

    // Maximum
    std::cout << "fmax(x, y) = " << std::fmax(x, y) << std::endl;

    // Minimum
    std::cout << "fmin(x, y) = " << std::fmin(x, y) << std::endl;

    // Floating-point remainder
    std::cout << "fmod(x, y) = " << std::fmod(x, y) << std::endl;

    // Power
    std::cout << "pow(x, y) = " << std::pow(x, y) << std::endl;

    // Sine
    std::cout << "sin(x) = " << std::sin(x) << std::endl;

    // Hyperbolic sine
    std::cout << "sinh(x) = " << std::sinh(x) << std::endl;

    // Tangent
    std::cout << "tan(x) = " << std::tan(x) << std::endl;

    // Hyperbolic tangent
    std::cout << "tanh(x) = " << std::tanh(x) << std::endl;

    return 0;
}
