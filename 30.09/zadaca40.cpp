#include <iostream>
#include <iterator>
#include <map>
#include <string>

int main() {
    std::map<int, std::string> numbers = {
        {100, "hundred"},
        {3, "three"},
        {42, "forty two"},
        {11, "eleven"},
    };

    auto iter = numbers.find(42);

    if (iter != numbers.end()) {
        const auto& [key, value] = *iter;
        std::cout << "Found: " << key << ": " << value << "\n";  

        
        if (iter != numbers.begin()) {
            const auto& [key, value] = *std::prev(iter);
            std::cout << "Previous: " << key << ": " << value << "\n";  
        } else {
            std::cout << "No previous element\n";
        }

        
        if (auto nextIter = std::next(iter); nextIter != numbers.end()) {
            const auto& [key, value] = *nextIter;
            std::cout << "Next: " << key << ": " << value << "\n";  
        } else {
            std::cout << "No next element\n";
        }
    } else {
        std::cout << "Not found\n";
    }
}
