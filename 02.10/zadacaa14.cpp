#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    // Числа идут по возрастанию:
    std::vector<int> data = {1, 4, 5, 9, 9, 13, 47};

    auto iter1 = std::lower_bound(
        data.begin(), data.end(),
        8
    );  // *iter1 == 9

    auto iter2 = std::upper_bound(
        data.begin(), data.end(),
        47
    );
    std::cout << *iter1 << "\n";  
     // iter2 == data.end()

    // все элементы исходной последовательности, такие, что 8 <= x <= 47,
    // попадут в полуинтервал [iter1, iter2)
    for (auto iter = iter1; iter != iter2; ++iter) {
        std::cout << *iter << " ";  // 9 9 13 47
    }
    std::cout << "\n";
}
