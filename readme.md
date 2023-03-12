# Complex Number Class in C++

This is a simple implementation of a complex number class in C++. It includes basic operations such as addition, subtraction, multiplication, and division of complex numbers, as well as compound assignment operators.


## How to use
To use the complex number class, you need to include the ComplexNumber.h header file in your C++ code. The header file includes the definition of the ComplexNumber class, which has the following public member functions:

* ComplexNumber() - default constructor, initializes the real and imaginary parts to zero.
* ComplexNumber(double r, double i) - constructor that takes two parameters, the real and imaginary parts of the complex number.
* double getReal() - returns the real part of the complex number.
* double getImaginary() - returns the imaginary part of the complex number.
* void setReal(double r) - sets the real part of the complex number to the given value.
* void setImaginary(double i) - sets the imaginary part of the complex number to the given value.

* ComplexNumber operator+(ComplexNumber c) - returns the sum of the complex number and the given complex number c.
* ComplexNumber operator-(ComplexNumber c) - returns the difference between the complex number and the given complex number c.
* ComplexNumber operator*(ComplexNumber c) - returns the product of the complex number and the given complex number c.
* ComplexNumber operator/(ComplexNumber c) - returns the quotient of the complex number and the given complex number c.
* ComplexNumber operator+=(ComplexNumber c) - adds the given complex number c to the complex number and returns the result.
* ComplexNumber operator-=(ComplexNumber c) - subtracts the given complex number c from the complex number and returns the result.
* ComplexNumber operator*=(ComplexNumber c) - multiplies the complex number by the given complex number c and returns the result.
* ComplexNumber operator/=(ComplexNumber c) - divides the complex number by the given complex number c and returns the result.

## Usage example


Here is an example program that creates two complex numbers and performs arithmetic operations between them:

### Main Code
```cpp
int main() {
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
}


```
### Output
```bash
c1: 3 + 2i
c2: 1 + 7i
Sum        : 4 + 9i
Difference : 2 - 5i
Product    : -11 + 23i
Quotient   : 0.488889 + -0.133333i


```
## License

[MIT](https://choosealicense.com/licenses/mit/)
