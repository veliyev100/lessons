#include <algorithm>
#include <iterator>
#include <list>
#include <vector>
#include <iostream>

int main() {
    std::vector<int> v = {3, 14, 15, 92, 6};
    std::list<int> l; 
    for(int a : v) {
		std::cout << a << " ";
	} 
	std::cout << "\n";
    std::copy(v.begin(), v.end(), std::back_inserter(l)); 
    for(int a : v) {
		std::cout << a << " ";;
	}
}
