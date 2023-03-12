
#include <iostream>
#include "ComplexNumber.h"

int main()
{
    ComplexNumber c1(3, 2);
    ComplexNumber c2(1, 7);

    std::cout << "c1: " << c1.getReal() << " + " << c1.getImaginary() << "i" << std::endl;
    std::cout << "c2: " << c2.getReal() << " + " << c2.getImaginary() << "i" << std::endl;

    ComplexNumber sum = c1 + c2;
    std::cout << "Sum        : " << sum.getReal() << " + " << sum.getImaginary() << "i" << std::endl;

    ComplexNumber diff = c1 - c2;
    std::cout << "Difference : " << diff.getReal() << " + " << diff.getImaginary() << "i" << std::endl;

    ComplexNumber product = c1 * c2;
    std::cout << "Product    : " << product.getReal() << " + " << product.getImaginary() << "i" << std::endl;

    ComplexNumber quotient = c1 / c2;
    std::cout << "Quotient   : " << quotient.getReal() << " + " << quotient.getImaginary() << "i" << std::endl;

    return 0;
}
