#include "FileManager.h"
#include <fstream>
#include <iostream>
using namespace std;

map<string, int> FileManager::LoadItems(const string& filename) {
    map<string, int> itemFrequency;
    ifstream inputFile(filename);

    if (inputFile.is_open()) {
        string item;
        while (getline(inputFile, item)) {
            itemFrequency[item]++;
        }
        inputFile.close();
    } else {
        cerr << "Error: Could not open file." << endl;
    }

    return itemFrequency;
}

void FileManager::SaveBackupFile(const string& filename, const map<string, int>& frequencies) {
    ofstream outputFile(filename);

    if (outputFile.is_open()) {
        for (const auto& pair : frequencies) {
            outputFile << pair.first << " " << pair.second << endl;
        }
        outputFile.close();
    } else {
        cerr << "Error: Could not write to file." << endl;
    }
}