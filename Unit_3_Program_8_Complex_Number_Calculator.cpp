/*
    OOP with C++ - Unit 3
    Real-Time Application 8
    Real-Time Application 2: Complex Number Calculator

    Source: Uploaded Zeal College course material.
    The program logic is kept as provided in the source.
*/

#include <iostream>
using namespace std;

class Complex {
private:

     double real;
     double imag;

public:
     Complex(double r = 0.0, double i = 0.0) : real(r), imag(i) {}

     Complex operator+(const Complex& other) const {
         return Complex(real + other.real, imag + other.imag);
     }

     Complex operator-(const Complex& other) const {
         return Complex(real - other.real, imag - other.imag);
     }

     Complex operator*(const Complex& other) const {
         return Complex(
              real * other.real - imag * other.imag,
              real * other.imag + imag * other.real
         );
     }

     bool operator==(const Complex& other) const {
         return real == other.real && imag == other.imag;
     }

     void display() const {
         cout << real << " + " << imag << "i" << endl;
     }
};

int main() {

    Complex c1(3.0, 4.0);
    Complex c2(1.0, 2.0);

    cout << "C1: ";
    c1.display();
    cout << "C2: ";
    c2.display();

    cout << "Sum: ";
    (c1 + c2).display();

    cout << "Difference: ";
    (c1 - c2).display();

    cout << "Product: ";
    (c1 * c2).display();
}
