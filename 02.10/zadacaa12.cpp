#include <algorithm>
#include <iostream>
#include <vector>
int main() {
	std::vector<int> data = {3,14,15,92,6};
	std::partial_sort(data.begin(),data.begin()+3,data.end());
	for(int a : data) {
		std::cout << a << " ";
	}
}
