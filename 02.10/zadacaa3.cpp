#include <algorithm>
#include <vector>
#include <iostream>
int main() {
    std::vector<int> data = {2,7,1,8,2,8};
    std::cout << std::count(data.begin(),data.end(),8) << "\n";
}
