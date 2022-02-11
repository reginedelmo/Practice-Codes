/* Name: Mary Regine S. Delmo
   Section: InTec 1-B
   Description: Hard Drive Capacity*/
   
#include <iostream>

using namespace std;

int main ()
{
    double hdsize;
    
    cout << "Enter hard drive size in giga bytes: ";
    cin >> hdsize;
    cout << endl;
    
    cout << "Hard drive size = ";
    cout << hdsize << " GB";
    cout << endl;
    
    double hdc;
    hdc = hdsize * 1000000000 / 1073741824;

    cout << "Actual hard drive storage capacity = ";
    cout << hdc << " GB" << endl;
    
    return 0;
}