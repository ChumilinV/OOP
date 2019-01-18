#include "Complex.h"

Complex::Complex()
{
	x_ = 0;
	y_ = 0;
}

Complex::Complex(float x, float y)
{
	SetRe(x);
	SetIm(y);
}

void Complex::SetRe(float x)
{
	x_ = x;
}

void Complex::SetIm(float y)
{
	y_ = y;
}

float Complex::Re() const
{
	return x_;
}

float Complex::Im() const
{
	return y_;
}

Complex Complex::operator + (const Complex &c)
{
	return Complex(x_ + c.Re(), y_ + c.Im());
}

Complex Complex::operator - (const Complex &c)
{
	return Complex(x_ - c.Re(), y_ - c.Im());
}

Complex Complex::operator * (const Complex &c)
{
	return Complex(х_*c.Re() - у_ * c.Im(), х_*c.Im() + c.Re()*у_);
}

Complex Complex::operator / (const Complex &c)
{
	return Complex((x_*c.Re() + y_*c.Im()) / (c.Re()*c.Re() + c.Im()*c.Im()), (x_*c.Im() + y_*c.Re()) / (c.Re()*c.Re() + c.Im()*c.Im()));
}