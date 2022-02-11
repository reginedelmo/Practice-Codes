/* Name: Mary Regine S. Delmo
   Section: InTec 1-B
   Description: Ninja Scroll Efficiency*/
   
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main ()
{
    double height, radius;
    const double PI = 3.14159;
    
    cout << "Enter the height of the scroll: ";
    cin >> height; //input for the value of height
    cout << endl;
    
    cout << "Enter the radius of the base of the scroll: ";
    cin >> radius; //input for the value of radius
    cout << endl;
    
    double volume, area;
    volume = PI * pow(radius, 2.0)* height;
    area = 2 * PI * radius * height + 2 * PI * pow(radius, 2.0);
    
    cout << fixed << showpoint << setprecision(2);
    cout << "Volume of the scroll = "; //shows the volume of the scroll
    cout << volume << endl;
    
    cout << "Surface area of the scroll = "; // shows the surface area of the scroll
    cout << area << endl;
    
    return 0;
}