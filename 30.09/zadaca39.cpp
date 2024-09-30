#include <iostream>
#include <map>

int main() {
    std::multimap<std::string, int> positions;

    std::string word;
    int position = 0;
    while (std::cin >> word) {
        positions.insert({word, position});
        ++position;
    }

    for (const auto& entry : positions) {
        std::cout << "Word: " << entry.first << ", Position: " << entry.second << '\n';
    }

    return 0;
}
