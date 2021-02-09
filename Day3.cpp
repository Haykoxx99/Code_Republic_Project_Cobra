// Day 4 exercises
//// Number 1
//#include <iostream>
//int main() {
//	const int size = 8;
//	int array[size]{};
//	for (int i = 0; i < size; i++)
//	{
//		std::cin >> array[i];
//	}
//	int bigIndex = 0;
//	for (int i = 0; i < size - 1; i++)
//	{
//		if (array[i] < array[i + 1])
//		{
//			bigIndex = i + 1;
//		}
//	}
//	std::cout << bigIndex << std::endl;
//	return 0;
//}


//// Number 2
//#include <iostream>
//int main() {
//	const int size = 8;
//	int array[size]{};
//	for (int i = 0; i < size; i++)
//	{
//		std::cin >> array[i];
//	}
//	int smallIndex = 0;
//	for (int i = 1; i < size; i++)
//	{
//		if (array[smallIndex] > array[i])
//		{
//			smallIndex = i;
//		}
//	}
//	std::cout << smallIndex << std::endl;
//	return 0;
//}


//// Number 3
//#include <iostream>
//int main() {
//	const int size = 8;
//	int array[size]{};
//	for (int i = 0; i < size; i++)
//	{
//		std::cin >> array[i];
//	}
//	int maxNumber = array[0];
//	int minNumber = array[0];
//	for (int i = 1; i < size; i++)
//	{
//		if (maxNumber < array[i])
//		{
//			maxNumber = array[i];
//		}
//		if (minNumber > array[i])
//		{
//			minNumber = array[i];
//		}
//	}
//	std::cout << minNumber + maxNumber << std::endl;
//	return 0;
//}