#include <forward_list>
#include <iostream>
#include <iterator>

int main() {
	std::forward_list<int> f1 = {3, 42, 5};
	f1.push_front(2);
	
	auto iter = std::next(f1.begin());
	iter = f1.erase_after(iter);
	f1.insert_after(iter, 4);
	
	for(int x : f1) {
		std::cout << x << "\n";
	}
}
