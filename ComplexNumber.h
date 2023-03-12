class ComplexNumber
{
private:
    double real;
    double imaginary;

public:
    ComplexNumber();
    ComplexNumber(double r, double i);
    double getReal();
    double getImaginary();
    void setReal(double r);
    void setImaginary(double i);
    ComplexNumber operator+(ComplexNumber c);
    ComplexNumber operator-(ComplexNumber c);
    ComplexNumber operator*(ComplexNumber c);
    ComplexNumber operator/(ComplexNumber c);
    ComplexNumber operator+=(ComplexNumber c);
    ComplexNumber operator-=(ComplexNumber c);
    ComplexNumber operator*=(ComplexNumber c);
    ComplexNumber operator/=(ComplexNumber c);
};
