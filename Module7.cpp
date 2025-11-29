// Module7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <algorithm> 
#include <cstdlib>   
#include <ctime>

using namespace std;

//struct item
struct Item {
    string name;
    int id;
};

//I didnt like using the same ID as the name so this is to spice things up a little
string getRandomString() {
    string letters = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string randomName = "";

    for (int i = 0; i < 5; i++) {
        // Pick a random index from 0 to 25
        int randomIndex = rand() % 26;
        randomName += letters[randomIndex];
    }
    return randomName;
}

//since it has to be sorted by name this is to sort the names
bool compareNames(const Item& a, const Item& b) {
    return a.name < b.name;
}



//binary search function
int binarySearch(Item* array, int size, int target) {
    int low = 0;
    int high = size - 1;

    while (low <= high) {
        int mid = low + ((high - low) / 2);

        if (array[mid].id == target) {
            return mid;
        }
        else if (array[mid].id < target) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    return -1;

}


int main()
{
    //dynamic size
    int size = 100;
    srand(time(0));


    //arrary of 100 Items
    Item* inventory = new Item[size];
    int search;
    
    //random name generator
    for (int i = 0; i < size; i++) {

        inventory[i].name = getRandomString();
    }

    //sort the names for the array
    sort(inventory, inventory + size, compareNames);

    //Fills the array with 100 items
    for (int i = 0;i < size; i++){
        inventory[i].id = 100 + i;
    }

    //asks the user to enter an ID
    cout << "Enter the ID you would like to search from 100 to 199" << endl;
    cin >> search;
    int result = binarySearch(inventory, size, search);

    //results displayed
    if (result != -1) {
        cout << "Item Name = " << inventory[result].name << endl;
        cout << "Item ID = " << inventory[result].id << endl;
        cout << "Index = " << result << endl;
    }
    else {
        cout << "Error: Invalid ID" << endl;
    }

    

    //freeing up memory
    delete[] inventory;
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
