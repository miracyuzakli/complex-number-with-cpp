#include "ComplexNumber.h"

ComplexNumber::ComplexNumber()
{
    real = 0.0;
    imaginary = 0.0;
}

ComplexNumber::ComplexNumber(double r, double i)
{
    real = r;
    imaginary = i;
}

double ComplexNumber::getReal()
{
    return real;
}

double ComplexNumber::getImaginary()
{
    return imaginary;
}

void ComplexNumber::setReal(double r)
{
    real = r;
}

void ComplexNumber::setImaginary(double i)
{
    imaginary = i;
}

ComplexNumber ComplexNumber::operator+(ComplexNumber c)
{
    return ComplexNumber(real + c.real, imaginary + c.imaginary);
}

ComplexNumber ComplexNumber::operator-(ComplexNumber c)
{
    return ComplexNumber(real - c.real, imaginary - c.imaginary);
}

ComplexNumber ComplexNumber::operator*(ComplexNumber c)
{
    return ComplexNumber(real * c.real - imaginary * c.imaginary, real * c.imaginary + imaginary * c.real);
}

ComplexNumber ComplexNumber::operator/(ComplexNumber c)
{
    double denominator = c.real * c.real + c.imaginary * c.imaginary;
    return ComplexNumber((real * c.real + imaginary * c.imaginary) / denominator, (imaginary * c.real - real * c.imaginary) / denominator);
}

ComplexNumber ComplexNumber::operator+=(ComplexNumber c)
{
    real += c.real;
    imaginary += c.imaginary;
    return *this;
}

ComplexNumber ComplexNumber::operator-=(ComplexNumber c)
{
    real -= c.real;
    imaginary -= c.imaginary;
    return *this;
}

ComplexNumber ComplexNumber::operator*=(ComplexNumber c)
{
    double tempReal = real * c.real - imaginary * c.imaginary;
    imaginary = real * c.imaginary + imaginary * c.real;
    real = tempReal;
    return *this;
}

ComplexNumber ComplexNumber::operator/=(ComplexNumber c)
{
    double denominator = c.real * c.real + c.imaginary * c.imaginary;
    double tempReal = (real * c.real + imaginary * c.imaginary) / denominator;
    imaginary = (imaginary * c.real - real * c.imaginary) / denominator;
    real = tempReal;
    return *this;
}
