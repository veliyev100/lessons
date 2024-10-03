#include <iostream>
#include <string>
#include <string_view>
#include <vector>
 
int main() {
    std::vector<std::string_view> lines;
    for (int i = 0; i < 5; ++i) {
        std::string line;
        std::getline(std::cin, line);
        lines.push_back(line);  // string_view в векторе ссылается на память строки line  
    }
    
    for (auto item : lines) {
        std::cout << item << "\n";  // Ошибка! Все эти строки уже невалидны!
    }
}
