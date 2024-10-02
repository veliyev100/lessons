#include <algorithm>
#include <list>
#include <vector>
#include <iostream>

int main() {
    std::vector<int> v = {3, 14, 15, 92, 6};
    std::list<int> l(10);  // 10 нулей

    auto iter = std::copy(v.begin(), v.end(), l.begin());
    // 3 14 15 92 6 0 0 0 0 0, iter указывает на первый ноль
for (int x : l) {
        std::cout << x << " ";
    }
    std::cout << "\n";
    l.erase(iter, l.end());  // 3 14 15 92 6
   for (int x : l) {
        std::cout << x << " ";
    }
}
