/* Name: Mary Regine S. Delmo
   Section: IT 1-B
   Description: Arrange the Code*/

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std;

int main()
{
    // declarations
    string shape;
    const double PI = 3.1416;
    double length;
    double width;
    double radius;
    double height;
    
    cout << fixed << showpoint << setprecision(2);
    
    //input
    cout << "Enter the shape type: (rectangle, circle, cylinder) ";
    cin >> shape;
    cout << endl;

    //if statement
    if (shape == "rectangle")
    {
        cout << "Enter the length of the rectangle: ";
        cin >> length;
        cout << endl;
        
        cout << "Enter the width of the rectangle: ";
        cin >> width;
        cout << endl;

        cout << "Area of the rectangle = ";
        cout << length * width << endl;
        
        cout << "Perimeter of the rectangle = ";
        cout << 2 * (length + width) << endl;
    }
    //else if statement
    else if (shape == "circle")
    {
        cout << "Enter the radius of the circle: ";
        cin >> radius;
        cout << endl;

        cout << "Area of the circle = ";
        cout << PI * pow(radius, 2.0) << endl;
        
        cout << "Circumference of the circle: ";
        cout << 2 * PI * radius << endl;
    }
    else if (shape == "cylinder")
    {
        cout << "Enter the height of the cylinder: ";
        cin >> height;
        cout << endl;

        cout << "Enter the radius of the base of the cylinder: ";
        cin >> radius;
        cout << endl;

        cout << "Volume of the cylinder = ";
        cout << PI * pow(radius, 2.0)* height << endl;
        
        cout << "Surface area of the cylinder: ";
        cout << 2 * PI * radius * height + 2 * PI * pow(radius, 2.0);
        cout << endl;
    }
    //else statement
    else
        cout << "The program does not handle " << shape << endl;

    return 0;
}
