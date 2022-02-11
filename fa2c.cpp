/* Name: Mary Regine S. Delmo
   Section: InTec 1-B
   Description: Choji's Weight Conversion*/
   
#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
    double weight;
    
    cout << "Enter the weight of Choji in kilograms: ";
    cin >> weight; //input for Choji's weight in kg
    cout << endl;
    
    double equwei, chowei;
    equwei = weight * 2.2;
    chowei = equwei / 2;
    
    cout << fixed << showpoint << setprecision(2);
    cout << "The equivalent weight of Choji in pounds = ";
    cout << equwei << endl; // shows the value for the equivalent weight of Choji in lbs
    
    cout << fixed << showpoint << setprecision(2);
    cout << "Choji's weight after taking the First of the Three Coloured Pill in pounds = ";
    cout << chowei << endl; // shows the value for Choji's weight after taking the pill in lbs
    
    return 0;
}