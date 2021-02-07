#include <iostream>
int Fact_R(int n)
{
	if (n <= 1)
	{
		return 1;
	}
	return n * Fact_R(n - 1);
}
int main()
{
	int n;
	std::cin >> n;
	std::cout << Fact_R(n) << std::endl;
	return 0;
}