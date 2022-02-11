/* Name: Mary Regine S. Delmo
    Section: InTec 1-B
    Description: FA1 Morty Math Midterm Mayhem */
    
#include <iostream>

using namespace std;

int main ()
{
    double score1, score2, score3, score4, score5;
    
    cout << "Enter Morty's Math Midterm Scores: "; // Removed the word Mayhem;
    cin >> score1 >> score2 >> score3 >> score4 >> score5;
    cout << endl;
    
    double average;
    
    average = (score1 + score2 + score3 + score4 + score5) / 5;
    
    cout << "Morty's Average Test Score: ";
    cout << average;
    cout << endl;
    
    return 0;
}
