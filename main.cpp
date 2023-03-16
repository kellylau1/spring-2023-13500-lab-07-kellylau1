#include <iostream>
#include <fstream>
#include "indent.h"
#include "unindent.h"

int main () {
    std::fstream bad_code("bad-code.cpp"); 
    if (bad_code.is_open()) {
        int tab = 0; 
        std::string line;
        while (getline(bad_code, line)) { 
            line = removeLeadingSpaces(line); 
            int holder = tab;
            if(line[0] == '}'){
                holder--; 
            }
            for (int i = 0; i < holder; i++) {
                std::cout << '\t'; 
            }
            std::cout << line << '\n';
            tab+=countChar(line,'{'); 
            tab-= countChar(line,'}'); 
        }
        bad_code.close(); 
    }

    std::fstream bad_code1("bad-code1.cpp"); 
    if (bad_code1.is_open()) {
        std::string line; 
        while (getline(bad_code1, line)) { 
            std::cout << removeLeadingSpaces(line) << '\n';  
        }
        bad_code.close(); 
    }

return 0; 
}