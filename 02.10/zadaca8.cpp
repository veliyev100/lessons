#include <algorithm>
#include <iostream>
#include <list>
#include <vector>

int main() {
    std::vector<int> v = {3, 14, 15, 92, 6};
    std::list<int> l;
    l.resize(v.size());  // теперь в списке l 5 нулей

    std::copy(v.begin(), v.end(), l.begin());

    for (int x : l) {
        std::cout << x << " ";
    }
    std::cout << "\n"; 
}
