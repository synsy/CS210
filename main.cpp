#include "FileManager.h"
#include "FrequencyManager.h"
#include "MenuManager.h"
using namespace std;

int main() {
    const string inputFile = "CS210_Project_Three_Input_File.txt";
    const string backupFile = "frequency.dat";

    auto frequencies = FileManager::LoadItems(inputFile);

    FrequencyManager frequencyManager;
    frequencyManager.LoadFrequencies(frequencies);

    MenuManager menuManager(frequencyManager);
    menuManager.DisplayMenu();

    FileManager::SaveBackupFile(backupFile, frequencyManager.GetFrequencies());

    return 0;
}