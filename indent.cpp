#include <iostream>
#include "indent.h"
#include "unindent.h"

int countChar(std::string line, char c);

int countChar(std::string line, char c) {
    int character_c = 0; 
    for(int i = 0; i < line.length(); i++) {
        if (line[i] == c) {
            character_c++; 
        }
    }
return character_c; 
}
