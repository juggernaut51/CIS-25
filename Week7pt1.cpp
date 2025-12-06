// Week7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    //added commas here becuase there wasnt any before
    float n1, n2, n3;

    cout << "Enter three numbers: ";
    //fixed this by adding an additional arrow
    cin >> n1 >> n2 >> n3;

    //changed if statements to nested if statements and in doing so removed the &&
    if (n1 >= n2) {

        if (n1 >= n3)
        {
            cout << "Largest number: " << n1;
        }
        else {
            cout << "Largest number: " << n3;
        }
    }
    else {
        if (n2 >= n3)
        {
            cout << "Largest number: " << n2;
        }
        else {
            cout << "Largest number: " << n3;
        }
    }

    return 0;


}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
