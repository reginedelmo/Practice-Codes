/* Name: Mary Regine S. Delmo
   Section: IT 1-B
   Description: Ninja Scroll Efficiency (Part 2)*/
   
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std;

int main()
{
//declarations
	double height, radius;
	const double PI = 3.14159;
	
	cout << fixed << showpoint << setprecision(2);
	
//input
	cout << "Enter the height of the scroll: ";
	cin >> height;
	cout << endl;
	
	cout << "Enter the radius of the base of the scroll: ";
	cin >> radius;
	cout << endl;
	
//output
    double volume;
    volume = PI * pow(radius, 2.0)* height;
	cout << "Volume of the scroll = ";
	cout << volume << endl;
	
	double area;
	area = 2 * PI * radius * height + 2 * PI * pow(radius, 2.0);
	cout << "Surface area of the scroll = ";
	cout << area << endl;

//if and else if statements
    if (area >= 1000)
    {
    	cout << "The Scroll is Approved and is given a Class ";
	}
	else if (area < 1000)
	{
		cout << "The Scroll is Disapproved and is given a Class ";
	}
	
	if (volume <= 500.99)
    {
    	cout << "F rank.";
	}
	else if (volume <=1000.99)
	{
		cout << "D rank.";
	}
	else if (volume <=2000.99)
	{
		cout << "C rank.";
	}
	else if (volume <=2500.99)
	{
		cout << "B rank.";
	}
	else if (volume <=3000.99)
	{
		cout << "A rank.";
	}
	else if (volume >= 3001)
	{
		cout << "S rank.";
	}
	return 0;
}
