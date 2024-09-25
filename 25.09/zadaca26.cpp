#include <iostream>
#include <list>

int main() {
	std::list<int> l = {10,15,20};
	l.push_front(5);
	l.push_front(0);
	
	l.push_back(25);
	l.push_back(30);
	
	l.pop_front();
	l.pop_back();
	for (int x : l) {
		std :: cout << x << "\n";
	}
}
