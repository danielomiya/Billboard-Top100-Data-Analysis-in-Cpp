#ifndef utilsHeader
#define utilsheader

#include <istream>
#include <string>
#include <vector>

class utils{        
    public:
        std::vector<std::string> readCSVRow(const std::string &row);
        std::vector<std::vector<std::string>> readCSV(std::istream &in);
};

#endif
