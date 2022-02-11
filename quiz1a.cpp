/* Name: Mary Regine S. Delmo
   Section: IT 1-B
   Description: Debugging A*/
   
#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
	long x;
	int count;
	long a_n;
	
	cout << "Enter a nonnegative integer: ";
	cin >> x;
	cout << endl;
	
	count = 0;
	
	a_n = x;
	cout << a_n << ", ";
	
	while (a_n != 1)
	{
		if (a_n % 2 == 0) // the operator before was just '=' and for c and c++ == compares value of left and side expressions
			a_n = a_n / 2;
		else
			a_n = 3 * a_n + 1;
	count++; //before it was only 'count+' and that's a wrong post increment, ++ adds 1 to its operand
	cout << a_n << ", ";
	}
	
	cout << endl;
	cout << "The integer k such that a_k = 1 is " << count << endl;
	
	return 0;
}