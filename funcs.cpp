#include <iostream>
#include "indent.h"
#include "unindent.h"


void indent_code (std::string line); 
void unindent_code(std::string line); 

int tab = 0; 
void indent_code (std::string line) {
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

void unindent_code(std::string line){
    std::cout << removeLeadingSpaces(line) << '\n'; 

}
