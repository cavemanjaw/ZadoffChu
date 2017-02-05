#include "Complex.h"

template <class T>
class Complex
{
public:
	Complex(T real, T imag);
private:
	Complex& operator+(Complex rhs);
	Compex& operator-(Compex rhs);
	T real;
	T imag;
};