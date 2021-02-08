//Book Exercise

//3.Write a program to calculate the area and circumference of 
//a circle where the radius is fed by the user

#include <iostream>
// The first method
constexpr double GetPi() { return 3.141593; }
constexpr double TwicePi() { return 2 * GetPi(); }

void AreaAndCircum(double radius, double &Area, double &Circum)
{
	Area = radius * radius * GetPi();
	Circum = TwicePi() * radius;
}

//// The second method
//void AreaAndCircum(double radius, double& Area, double& Circum)
//{
//	const double pi = 3.141593;
//	Area = radius * radius * pi;
//	Circum = 2 * pi * radius;
//}

int main()
{
	double radius,area,circum;
	std::cout << std::endl << "Radius is equal to ";
	std::cin >> radius;
	std::cout << "-----------------------------------------" << std::endl;
	AreaAndCircum(radius, area, circum);
	std::cout << "Area is equal to " << area << std::endl;
	std::cout << "Circumference is equal to " << circum << std::endl;
	return 0;
}