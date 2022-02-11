/* Name: Mary Regine S. Delmo
   Section: IT 1-B
   Description: Plusle and Minun Number Select*/
   
#include <iostream>

using namespace std;

int main()
{
//declaration
    double berry;

//input
	cout << "Enter a number in the berries: ";
	cin >> berry;
	cout << endl;

//output
	cout << "The number you entered is " << berry << " ";

//if, else if, and else statements
	if(berry > 0)
	{
		cout << "and Plusle loves these berries.";
	}
	else if(berry < 0)
	{
		cout << "and Minun loves these berries.";
	}
	else 
		cout << "and Plusle and Minun won't eat these berries.";
	
	return 0;
}
