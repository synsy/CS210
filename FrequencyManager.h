#ifndef FREQUENCY_MANAGER_H
#define FREQUENCY_MANAGER_H

#include <string>
#include <map>

class FrequencyManager {
private:
    std::map<std::string, int> itemFrequency;

public:
    void LoadFrequencies(const std::map<std::string, int>& frequencies);
    void IncrementItem(const std::string& item);
    int GetFrequency(const std::string& item) const;
    void DisplayFrequencies() const;
    void DisplayHistogram() const;
    const std::map<std::string, int>& GetFrequencies() const;
};

#endif