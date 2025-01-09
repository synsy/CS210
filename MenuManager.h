#ifndef MENU_MANAGER_H
#define MENU_MANAGER_H

#include "FrequencyManager.h"

class MenuManager {
private:
    FrequencyManager& frequencyManager;

public:
    MenuManager(FrequencyManager& manager);
    void DisplayMenu();
    void SearchItem();
};

#endif