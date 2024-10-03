#include <iostream>
#include <string>

int main() {
    std::string s = "Hello, world! How do you do?";
    auto sub = s.substr(7);  // тип sub — std::string
    sub[0] = 'W';
    std::cout << sub << "\n";  // World
    // В исходной строке всё осталось по-прежнему:
    std::cout << s << "\n";  // Hello, world! How do you do?
}
