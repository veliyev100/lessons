#include <algorithm>
#include <vector>
#include <iostream>
int main() {
    std::vector<int> data = {100, 42, 17, 80, 20, 0};
    std::sort(data.begin() + 1,data.end() -1);
    for(int a: data) {
		std::cout << a << " ";
	}
	return 0; 
}

