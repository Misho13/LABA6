// Laba6-2.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "Header.h"

int main()
{
	square **arr = new square *[5];
	square A(10);
	square B(5);
	rectandle C(2, 3);
	rectandle R(1, 2);
	rectandle E(2, 5);
	arr[0] = &A;
	arr[1] = &B;
	arr[2] = &C;
	arr[3] = &R;
	arr[4] = &E;
	for (int i = 0; i < 5; i++)
	{
		arr[i]->print();
		std::cout << std::endl;
	}
	std::cout << std::endl;
	system("pause");
    return 0;
}

