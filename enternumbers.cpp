#include <iostream>

int main()
{
	int x{};
	int y{};	

	std::cout << "Please enter a number:";
	std::cin >> x;
	std::cout << "Please enter another number: ";
	std::cin >> y;
	
	std::cout << "You entered " << x << " and " << y;

	return 0;
}
