/* Name: Mary Regine S. Delmo
   Section: IT 1-B
   Description: Arrange the Code*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double density, mass;
    
    cout << fixed << showpoint << setprecision(2); // it was 'fix' before, the correct one is 'fixed'

	cout << "Enter the mass (in grams) of an object: ";
	cin >> mass; // it was density before, the correct variable is mass.
	cout << endl;
	
	cout << "Enter the density (in in grams per cubic centimeters) of an object: ";
	cin >> density; // it was mass before, the correct variable is density.
	cout << endl;
	
	cout << "The volume of the object (mass/density) is: " << mass / density << endl; // the formula was interchanged before.
	
    return 0;
}
