#include <iostream>
using namespace std;

struct Complex
{
    double real;
    double imaginary;
};


void printComplex(const Complex& c)
{
    cout << "R: " << c.real << " I: " << c.imaginary << endl;
}


Complex add(const Complex& c1, const Complex& c2)
{
    Complex result;
    result.real = c1.real + c2.real;
    result.imaginary = c1.imaginary + c2.imaginary;
    return result;
}


int main()
{
    // A program to introduce `struct`.
    // We will work with complex numbers.
    cout << "Input a complex number:\n";
    Complex c1;
    cin >> c1.real >> c1.imaginary;
    printComplex(c1);

    Complex c2{43.2, 58.9};

    Complex c3 = add(c1, c2);
    printComplex(c3);
}