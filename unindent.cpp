#include <iostream>
#include <cctype>
#include "unindent.h"

std::string removeLeadingSpaces(std::string line);

std::string removeLeadingSpaces(std::string line) {
    int i; 
    for (i = 0; i < line.size(); i++) {
        if (!isspace(line[i])) {
            break;
        }
    }
return line.substr(i); 
}
