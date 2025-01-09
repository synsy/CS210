#include "MenuManager.h"
#include <iostream>
#include <string>
using namespace std;

MenuManager::MenuManager(FrequencyManager& manager) : frequencyManager(manager) {}

void MenuManager::DisplayMenu() {
    int choice;

    do {
        cout << "\n" << string(39, '#') << endl;
        cout << "  Menu Options:\n"
                  << "  1. Search for an item\n"
                  << "  2. Display all items and frequencies\n"
                  << "  3. Display histogram\n"
                  << "  4. Exit\n"
                  << string(39, '#') << "\n"
                  << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                SearchItem();
            break;
            case 2:
                frequencyManager.DisplayFrequencies();
            break;
            case 3:
                frequencyManager.DisplayHistogram();
            break;
            case 4:
                cout << "Exiting program." << endl;
            break;
            default:
                cout << "Invalid option. Please try again." << endl;
        }
    } while (choice != 4);
}

void MenuManager::SearchItem() {
    string item;
    cout << "Enter the item you wish to search for: ";
    cin.ignore();
    getline(cin, item);

    int frequency = frequencyManager.GetFrequency(item);
    if (frequency > 0) {
        cout << "The item '" << item << "' appears " << frequency << " times." << endl;
    } else {
        cout << "The item '" << item << "' was not found." << endl;
    }
}