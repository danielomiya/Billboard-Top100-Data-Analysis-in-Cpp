#ifndef BILLBOARD_TOP100_FILEREADERCLASS_HPP
#define BILLBOARD_TOP100_FILEREADERCLASS_HPP

#include <fstream>
#include <string>
#include <vector>
#include "recordStruct.hpp"

class fileReaderClass {
private:
    std::string path;
public:
    explicit fileReaderClass(const std::string &path);

    ~fileReaderClass();

    std::vector<BillboardSong> getData();
};

#endif //BILLBOARD_TOP100_FILEREADERCLASS_HPP
