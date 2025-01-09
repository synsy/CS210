#include "FrequencyManager.h"
#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

// Convert string to lowercase
string ToLower(const string& str) {
    string lowerStr = str;
    transform(lowerStr.begin(), lowerStr.end(), lowerStr.begin(), ::tolower);
    return lowerStr;
}

void FrequencyManager::LoadFrequencies(const map<string, int>& frequencies) {
    for (const auto& pair : frequencies) {
        string lowerItem = ToLower(pair.first);
        itemFrequency[lowerItem] += pair.second;
    }
}

void FrequencyManager::IncrementItem(const string& item) {
    string lowerItem = ToLower(item);
    itemFrequency[lowerItem]++;
}

int FrequencyManager::GetFrequency(const string& item) const {
    string lowerItem = ToLower(item);
    auto it = itemFrequency.find(lowerItem);
    if (it != itemFrequency.end()) {
        return it->second;
    }
    return 0;
}

void FrequencyManager::DisplayFrequencies() const {
    cout << "\nItem Frequencies:\n";
    for (const auto& pair : itemFrequency) {
        cout << pair.first << " " << pair.second << endl;
    }
}

void FrequencyManager::DisplayHistogram() const {
    cout << "\nHistogram:\n";
    for (const auto& pair : itemFrequency) {
        cout << setw(15) << left << pair.first << " ";
        for (int i = 0; i < pair.second; ++i) {
            cout << "*";
        }
        cout << endl;
    }
}

const map<string, int>& FrequencyManager::GetFrequencies() const {
    return itemFrequency;
}
