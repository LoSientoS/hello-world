#include <iostream>

int main()
{
	int x{};
	int y{};

	std::cout << "Enter the first number: ";
	std::cin >> x;
	std::cout << "Enter the second number: ";
	std::cin >> y;

	std::cout << x << " + " << y << " is " << x+y;

	return 0;
}
