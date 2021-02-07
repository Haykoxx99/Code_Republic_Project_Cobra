// Enter the values of the array elements. Find and print the index of the element with the maximum value.
// will print -1 when there is no maximum element
#include <iostream>
int main()
{
	const int n = 8;
	int arr[n]{};
	for (int i = 0; i < n; i++)
	{
		std::cin >> arr[i];
	}
	int index = -1, max = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
			index = i;
		}
	}
	std::cout << "max index = " << index << std::endl;
	return 0;
}