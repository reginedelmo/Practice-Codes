/* Name: Mary Regine S. Delmo
   Section IT 1-B
   Description: FA4-B Odd Job (While Version) */
   
#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
//declarations
	int uno, dos;
	int cero, evenSum, oddSum;
	
//equivalence of variables
	evenSum = 0;
	oddSum = 0;
	
//outputs and inputs
	cout << "Enter two numbers." << endl;
	cout << "First number must be less than the second number you enter" << endl;
	cout << "Enter numbers: ";
	cin >> uno >> dos;
	cout << endl;
	
//output of the password
	cout << "The password is: " << endl;
	cout << uno << dos;
	
//while loop
cero = uno;
	while (cero <= dos)
	{
		//statement for the all odd numbers output
		if (cero % 2 == 1)
			cout << cero;
			cero++;
	}
cero = uno;
	while (cero <= dos)
	{
		//statement for the sum of all even numbers output
		if (cero % 2 == 0)
			evenSum = evenSum + cero;
			cero++;
	}
		cout << evenSum;
		
cero = uno;
	while (cero <= dos)
	{
		//statement for the squared sum of all odd numbers output
		if (cero % 2 == 1)
			oddSum = oddSum + pow(cero,2.0);
			cero++;
	}
		cout << oddSum;	
			
	return 0;
}
