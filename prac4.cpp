/* Name: Mary Regine S. Delmo
   Section: InTec 1-B
   Description: Arrange the Code*/

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double height;
    
    cout << "Enter the height of the cylinder: ";
    cin >> height; //input for the value of height
    cout << endl;
    
    double radius;
    
    cout << "Enter the radius of the base of the cylinder: ";
    cin >> radius; // input for the value of radius
    cout << endl;
    
    const double PI = 3.14159;
    
    cout << fixed << showpoint << setprecision(2);
    cout << "Volume of the cylinder = "; //shows the value of the volume of the cylinder
    cout << PI * pow(radius, 2.0)* height << endl;
    
    cout << "Surface area = "; //shows the value of the surface area
    cout << 2 * PI * radius * height + 2 * PI * pow(radius, 2.0);
    cout << endl;
    
    return 0;
    
}