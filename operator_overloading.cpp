#include <iostream>
using namespace std;

class Complex
{
    int real, imag;

public:
    Complex(int r = 0, int i = 0)
    {
        real = r;
        imag = i;
    }

    Complex operator++()
    {
        ++real;
        ++imag;
        return *this;
    }

    Complex operator--()
    {
        --real;
        --imag;
        return *this;
    }

    Complex operator+(Complex c)
    {
        return Complex(real + c.real, imag + c.imag);
    }

    Complex operator-(Complex c)
    {
        return Complex(real - c.real, imag - c.imag);
    }

    void display()
    {
        cout << real << " + " << imag << endl;
    }
};

int main()
{
    Complex c1(5, 3), c2(2, 1), c3;

    cout << "First Complex Number: ";
    c1.display();

    cout << "Second Complex Number: ";
    c2.display();

    c3 = c1 + c2;
    cout << "Addition: ";
    c3.display();

    c3 = c1 - c2;
    cout << "Subtraction: ";
    c3.display();

    ++c1;
    cout << "After Increment: ";
    c1.display();

    --c2;
    cout << "After Decrement: ";
    c2.display();

    return 0;
}
