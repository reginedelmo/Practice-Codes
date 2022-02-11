/* Name: Mary Regine S. Delmo
   Section: InTec 1-B
   Description: Formative Assessment 2-A*/
   
#include <iostream>

using namespace std;

int main ()
{
    double quantity;
    
    cout << "Enter, in liters, the total quantity of milk produced by the Galactic Federation: ";
    cin >> quantity; // input for total quantity of milk in liters
    cout << endl;
    
    int milk;
    const double carcap = 4.50, coslit = 0.75, procar = 0.25;
    milk = quantity / carcap + 0.5;
    
    cout << "The number of milk cartons needed to hold milk: ";
    cout << milk; // shows the number of milk cartons
    cout << endl;
    
    cout << "The cost of producing milk: ";
    cout << quantity * coslit; // shows the cost of producing milk
    cout << " Blemflarck" << endl;
    
    cout << "Profit: ";
    cout << milk * procar; // shows the profit
    cout << " Blemflarck" << endl;
    
    return 0;
}