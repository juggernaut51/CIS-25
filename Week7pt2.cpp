// Week7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <string>
#include <iostream> 
using namespace std;
int main() {
	int choice;
	const int size = 5;
	string invintory[size] = { "sword", "shield", "waterskin", "apple", "potion" };

	do {

		int confirm;
		cout << "1. Main Menu\n2. Inventory\n3. Quit Game\n";
		cout << "Choose an option: ";
		cin >> choice;

		if (choice == 1) cout << "Now loading... Main Menu\n";
		else if (choice == 2) {
			cout << "Displaying Inventory\n";
			for (int i = 0; i < size; i++) {
				cout << invintory[i] << endl;
			}

			cout << "Press 1 to return to the previous menu\n";
			
			do {
				cin >> confirm;
				if (confirm == 1) {
					cout << "Returning to the previous menu\n";
				}
				else {
					cout << "Invalid choice, press 1 to return to the previous menu\n";
				}
			} while (confirm != 1);
		}
		else if (choice == 3) {
			cout << "Are you Sure you want to exit?\n Enter 1 to exit \n Enter 2 to cancel\nAny unsaved progress will be lost" << endl;
			cin >> confirm;
			if (confirm == 1) {
				cout << "Noww exiting game";
			}
			else if (confirm == 2) {
				choice = 0;
			}

		}
		else {
			cout << "Invalid option.\n";
		}

	} while (choice != 3);

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
