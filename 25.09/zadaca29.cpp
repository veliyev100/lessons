#include <iostream>
#include <list>

int main() {
	std::list<int> l = {0, 10, 15, 20};
	auto iter = l.begin();
	++iter;
	l.insert(iter,5);
	for(auto it = l.begin(); it != l.end(); ++it ) {
		if (*it % 2 == 0) {
			it = l.erase(iter);
		}
	}
	for (int x : l) {
		std :: cout << x << "\n";
	}
}
