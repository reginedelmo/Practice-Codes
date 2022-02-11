/* Name: Mary Regine S. Delmo
   Section: IT 1-B
   Description: Rick's Not-For-Morty Backyard Sale (Part 2)*/

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{	
//declarations
	double originalPrice, markUp, taxRate;
	double sellingPrice, salesTax;
	double finalPrice, percentageMarkUp;
	
	cout << fixed << showpoint << setprecision(2);
	
//input
	cout << "Enter the original price of the item: ";
	cin >> originalPrice;
	cout << endl;

	cout << "Enter the marked up percentage: ";
	cin >> markUp;
	cout << endl;

	cout << "Enter the sales tax rate: ";
	cin >> taxRate;
	cout << endl;
	
//output
	cout << "The original price = " << originalPrice << " Flurbos" << endl;
	
	sellingPrice = originalPrice + ((originalPrice * markUp) / 100);
	cout << "The selling price = " << sellingPrice << " Flurbos" << endl;
	
	salesTax = (sellingPrice * taxRate) / 100;
	finalPrice = sellingPrice + salesTax;
	cout << "The final price = " << finalPrice << " Flurbos" << endl;
	
	percentageMarkUp = ((finalPrice - originalPrice) / originalPrice) * 100;
	cout << percentageMarkUp << "% Markup" << endl;

// if , else if statement
	if (percentageMarkUp <= 24.99)
	{
		cout << "No stopping Rick in his backyard sale.";
	}
	else if (percentageMarkUp <= 49.99)
	{
		cout << "Possibly something will stop Rick in his backyard sale.";
	}
	else if (percentageMarkUp <= 74.99)
	{
		cout << "The Galactic Federation is up to something.";
	}
	else if (percentageMarkUp > 75)
	{
		cout << "No backyard sale for Rick.";
	}

	return 0;
}
