/* Name: Mary Regine S. Delmo
Section: InTec 1-B
Description: Rick's Not-For-Morty Backyard Sale
*/

#include <iostream>

using namespace std;

int main()
{
    double num1, num2, num3;

    cout << "Enter the original price of the item: ";
    cin >> num1;
    cout << endl;

    cout << "Enter the marked up percentage: ";
    cin >> num2;
    cout << endl;

    cout << "Enter the sales tax rate: ";
    cin >> num3;
    cout << endl;

    double origPrice, markUp, sellPrice, salesRate, salesTax, finalPrice;

    origPrice = num1;
    markUp = num2;
    sellPrice = (num1 * num2) / 100 + num1;
    salesRate = num3;
    salesTax = (sellPrice * salesRate) / 100;
    finalPrice = (sellPrice + salesTax);

    cout << "The original price = ";
    cout << origPrice;
    cout << " Flurbos" << endl;

    cout << "The price is marked up by ";
    cout << markUp << "%";
    cout << endl;

    cout << "The selling price = ";
    cout << sellPrice;
    cout << " Flurbos" << endl;

    cout << "The sales rate = ";
    cout << salesRate << "%";
    cout << endl;

    cout << "The sales tax = ";
    cout << salesTax;
    cout << " Flurbos" << endl;

    cout << "The final price = ";
    cout << finalPrice;
    cout << " Flurbos" << endl;

    return 0;
}