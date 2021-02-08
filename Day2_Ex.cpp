//Perform factorial calculation by iterative method.
#include <iostream>
int main()
{
	unsigned int number;
	std::cout << "Enter the number ";
	std::cin >> number;
	if (number == 0 || number == 1)
	{
		std::cout << "Factorial is equal to " << 1 << std::endl;
		return 0;
	}
	long long int factorial = 1;
	for (int i = 2; i <= number; i++)
	{
		factorial *= i;
	}
	std::cout << "Factorial is equal to " << factorial << std::endl;
	return 0;
}