#ifndef FILE_MANAGER_H
#define FILE_MANAGER_H

#include <string>
#include <map>

class FileManager {
public:
    static std::map<std::string, int> LoadItems(const std::string& filename);
    static void SaveBackupFile(const std::string& filename, const std::map<std::string, int>& frequencies);
};

#endif