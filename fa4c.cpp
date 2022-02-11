/* Name: Mary Regine S. Delmo
   Section IT 1-B
   Description: FA4-C Odd Job (For Version) */
   
#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
//declarations
	int num1, num2;
	int i, sumEven, sumOdd;
	
//equivalence of variables
	sumEven = 0;
	sumOdd = 0;
	
//outputs and inputs
	cout << "Enter two numbers." << endl;
	cout << "First number must be less than the second number you enter" << endl;
	cout << "Enter numbers: ";
	cin >> num1 >> num2;
	cout << endl;
	
//output of the password
	cout << "The FOR password is: " << endl;
	cout << num1 << num2;

//for loop
	//statement for the all odd numbers output
	for (i = num1; i <= num2; i++)
	{
        if (i % 2 == 1)
        {
            cout << i;
		}
	}
	//statement for the sum of all even numbers output
	for (i = num1; i <= num2; i++)
	{
		if (i % 2 == 0)
			sumEven = sumEven + i;
	}
	cout << sumEven;
	//statement for the squared sum of all odd numbers output
	for (i = num1; i <= num2; i++)
	{
		if (i % 2 == 1)
			sumOdd = sumOdd + pow(i,2.0);
	}
	cout << sumOdd;
	
	return 0;
}
