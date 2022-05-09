#include <iostream>

int main()
{
	int a = 12;
	int* b = &a;

	*b = 15;

	std::cout << a << std::endl << *b << std::endl;

	int c = 12;
	int d = c;

	d = 15;

	std::cout << c << std::endl << d << std::endl;

	return 0;
}
