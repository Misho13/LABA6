#pragma once
#include <iostream>

class square
{
protected:
	double _a;
public:
	square(): _a(0)
	{}
	square (double a):_a(a)
	{}
	virtual double perimeter () 
	{
		return (4 * _a);
	}
	virtual void print()
	{
		std::cout << "side = " << _a << std::endl << "perimeter = " << this->perimeter();
	}
	~square()
	{}
};

class rectandle : public square
{
protected:
	double _b;
public :
	rectandle () : square(), _b(0)
	{}
	rectandle(double a, double b) : square(a), _b(b)
	{}
	double perimeter()
	{
		double c = square::perimeter()/2;
		return (c + 2 * _b);
	}
	void print()
	{
		//std::cout << std::endl;
		std::cout << "side = " << _b <<" ";
		square::print();
	}
	~rectandle() 
	{}
};