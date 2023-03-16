#include <iostream>
#include "indent.h"
#include "unindent.h"

int countChar(std::string line, char c);
// void num_of_blocks(std::string line);


int countChar(std::string line, char c) {
    int character_c = 0; 
    for(int i = 0; i < line.length(); i++) {
        if (line[i] == c) {
            character_c++; 
        }
    }
return character_c; 
}

// int tab = 0; 
// void num_of_blocks(std::string line) {   
    
//     line = removeLeadingSpaces(line); 
//     int holder = tab;
//     if(line[0] == '}'){
//         holder--; 
//     }
//     for (int i = 0; i < holder; i++) {
//         std::cout << '\t'; 
//     }
//     std::cout << line << '\n';
//     tab+=countChar(line,'{'); 
//     tab-= countChar(line,'}'); 
// }


// int main () {
//     int tab = 0; 
//     std::string line;
//     while(getline(std::cin, line)) {
//         line = removeLeadingSpaces(line); 
//         int holder = tab;
//         if(line[0] == '}'){
//             holder--; 
//         }
//         for (int i = 0; i < holder; i++) {
//             std::cout << '\t'; 
//         }
//         std::cout << line << '\n';
//         tab+=countChar(line,'{'); 
//         tab-= countChar(line,'}'); 
        
//     }

// return 0; 
// }