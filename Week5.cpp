// Week5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream> 
#include <fstream> 
#include <string> 
#include <cstdlib>
#include <ctime>
using namespace std;

class Card {
public:
	string suit;
	int value;
    void saveToFile() {
        ofstream out("hand.txt", ios::app);
        if (out.is_open()) {
            out << value << " of " << suit << endl;
            out.close();
            cout << "Card saved to hand." << endl;
        }
        else {
            cout << "Unable to open file for writing." << endl;
        }
    }
    void loadFromFile() {
        ifstream in("hand.txt");
        if (in.is_open()) {
            string line;
            while (getline(in, line)) {
                cout << "Cards in hand: " << line << endl;
            }
            in.close();
        }
        else {
            cout << "Unable to open file for reading." << endl;
        }
    }
};
int main() {
    string suitOptions[4] = { "Hearts", "Clubs","Spades", "Diamonds" };
    srand(static_cast<unsigned int>(time(0)));

    int randSuit = (rand() % 4);
    int randNum = (rand() % 10) + 1;
    cout << randSuit;
    Card deck;
    deck.suit = suitOptions[randSuit];
    deck.value = randNum;

    deck.saveToFile();
    deck.loadFromFile();

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
