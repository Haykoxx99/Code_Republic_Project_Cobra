// Exercise for Days
// 3rd and 4th exercises
// tpum e num ic minchev 0 rekursiv metodov
#include <iostream>
//void FromToRec(int number)
//{
//	if (number == 0)
//	{
//		std::cout << 0 << " ";
//		return;
//	}
//	std::cout << number << " ";
//	FromToRec(number - 1);
//}
void FromToRec(int number)
{
	for (int i = number; i >= 0; i--)
	{
		std::cout << i << " ";
	}
}
int main()
{
	int num;
	std::cout << "Number = ";
	std::cin >> num;
	FromToRec(num);
	//FromToRec(num);
	return 0;
}