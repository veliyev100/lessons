#include <iostream>
#include <string>
#include <string_view>

int main() {
    std::string s = "Hello, world! How do you do?";
    std::string_view sv = s;
    sv.remove_prefix(7);  // убрали из sv первые 7 символов
    sv.remove_suffix(16);  // убрали последние 16 символов
    std::cout << sv << "\n";  // world
    std::cout << s << "\n";  // строка s при этом никак не изменилась
}

