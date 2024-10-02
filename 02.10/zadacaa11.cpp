#include <algorithm>
#include <list>
#include <iostream>

int main() {
    std::list<int> data = {3, 14, 15, 92, 6};
   // std::sort(data.begin(), data.end()); 
    data.sort();  
    for (auto omar: data) {
		std::cout << omar << " ";
}
}
