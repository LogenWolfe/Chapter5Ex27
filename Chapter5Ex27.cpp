// Name: Logen N. Wolfe
// Date: 10/28/26
// Program: Chapter 5 Exercise 27
// Description: This program makes a bar chart showing the population growth of Prairieville at 20 year intervals over 100 years.

#include <iostream>
#include <fstream>

using namespace std;
int main()
{

    cout << "Logen's Population Chart for Prairieville!" << endl;
    int year = 1910;
    int population;
    int numberOfStars;
    fstream file;
    file.open("people.txt");
    if (file.is_open())
        while (file >> population)
        {
            numberOfStars = population / 1000;
            cout << year << ": ";
            for (int i = 0;i < numberOfStars; i++)
                cout << "*";
            cout << endl;
            year += 20;
        }
    file.close();
}