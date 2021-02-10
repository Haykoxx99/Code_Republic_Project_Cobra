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


//// Number 4
//#include <iostream>
//int main() {
//	const int size = 8;
//	int array[size]{};
//	for (int i = 0; i < size; i++)
//	{
//		std::cin >> array[i];
//	}
//	for (int i = size-1; i >= 0; i--)
//	{
//		std::cout << array[i] << " " ;
//	}
//	return 0;
//}


//// Number 5
//#include <iostream>
//int main() {
//	const int size = 8;
//	int array1[size]{};
//	for (int i = 0; i < size; i++)
//	{
//		std::cin >> array1[i];
//	}
//	int array2[size]{};
//	for (int i = 0; i < size; i++)
//	{
//		std::cin >> array2[i];
//	}
//	for (int i = 0; i < size; i++)
//	{
//		std::cout << array1[i]*array2[i] << " ";
//	}
//	return 0;
//}


//// Number 6
//#include <iostream>
//int main() {
//	const int size = 8;
//	int array1[size]{};
//	for (int i = 0; i < size; i++)
//	{
//		std::cin >> array1[i];
//	}
//	int array2[size]{};
//	for (int i = 0; i < size; i++)
//	{
//		std::cin >> array2[i];
//	}
//	for (int i = 0; i < size; i++)
//	{
//		std::cout << array1[i] + array2[i] << " ";
//	}
//	return 0;
//}


//// number 11
//#include <iostream>
//int main() {
//	const int size = 8;
//	int array[size]{};
//	for (int i = 0; i < size; i++)
//	{
//		std::cin >> array[i];
//	}
//	int count = 0;
//	for (int i = 0; i < size; i++)
//	{
//		if (array[i] % 2 != 0)
//		{
//			count++;
//		}
//	}
//	std::cout << " count = " << count << std::endl;
//	return 0;
//}


//// number 12
//#include <iostream>
//int main() {
//	const int size = 8;
//	int array[size]{};
//	for (int i = 0; i < size; i++)
//	{
//		std::cin >> array[i];
//	}
//	int count = 0;
//	for (int i = 0; i < size; i++)
//	{
//		if (array[i] % 2 == 0)
//		{
//			count++;
//		}
//	}
//	std::cout << " count = " << count << std::endl;
//	return 0;
//}


// number 16
#include <iostream>
int main() {
	const int size = 8;
	int array[size]{};
	for (int i = 0; i < size; i++)
	{
		std::cin >> array[i];
	}
	int mult = 1;
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		mult *= array[i];
		sum += array[i];
	}
	std::cout << "The arithmetic average is  " << (double)(mult + sum)/2 << std::endl;
	return 0;
}