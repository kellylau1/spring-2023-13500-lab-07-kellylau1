#include <iostream>
#include <fstream>
#include "indent.h"
#include "unindent.h"
#include "funcs.h"

int main () {
    
    std::string line; 
    std::fstream bad_code("bad-code.cpp"); 
    if (bad_code.is_open()) {
        while (getline(bad_code, line)) { 
            indent_code(line); 
        } 
        bad_code.close(); 
    }

    std::fstream bad_code1("bad-code1.cpp"); 
    if (bad_code1.is_open()) {
        while (getline(bad_code1, line)) { 
            unindent_code(line); 
        }
        bad_code.close(); 
    }

return 0; 
}