/* Name: Mary Regine S. Delmo
   Section: IT 1-B
   Description: Arrange the Code*/
   
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
//declarations
	string stone;
	int oras, kapangyarihan, kalawakan;
	int realidad, kaluluwa, isip;

//formula or equivalence of each variable
	oras = kapangyarihan = kalawakan = realidad = kaluluwa = isip = 1;
	
//while loop
	while (stone != "SNAP")
	{
		//input
		cout << "Use the power of what stone? ";
		cin >> stone;
		cout << endl;
		
		//if and else-if statements
		if (stone == "TIME")
		{
			cout << "Unleash the power of the Time Stone!" << endl;
			oras++;
		}
		else if (stone == "POWER")
		{
			cout << "Unleash the power of the Power Stone!" << endl;
			kapangyarihan++;
		}
		else if (stone == "SPACE")
		{
			cout << "Unleash the power of the Space Stone!" << endl;
			kalawakan++;
		}
		else if (stone == "REALITY")
		{
			cout << "Unleash the power of the Reality Stone!" << endl;
			realidad++;
		}
		else if (stone == "SOUL")
		{
			cout << "Unleash the power of the Soul Stone!" << endl;
			kaluluwa++;
		}
		else if (stone == "MIND")
		{
			cout << "Unleash the power of the Mind Stone!" << endl;
			isip++;
		}
	}
	//outputs with numbers of stones used
	cout << "Unleash the power of all stones!" << endl;
	
	cout << "The number of times the stones was used was " << oras+kapangyarihan+kalawakan+realidad+kaluluwa+isip << "!" << endl;
	cout << "TIME = " << oras << endl;
	cout << "POWER = " << kapangyarihan << endl;
	cout << "SPACE = " << kalawakan << endl;
	cout << "REALITY = " << realidad << endl;
	cout << "SOUL = " << kaluluwa << endl;
	cout << "MIND = " << isip << endl;
	
	return 0;
}
