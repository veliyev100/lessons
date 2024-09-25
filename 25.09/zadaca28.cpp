#include <iostream>
#include <list>

int main() {
	std::list<int> l = {10, 15, 20};
	for (auto iter = l.begin(); iter != l.end(); ++iter) {// sdes nacinayetsya s pervoqo elementa to yest 10
		std::cout << *iter << "\n";
	}
	for (auto iter = l.rbegin(); iter != l.rend(); ++iter) { //rbegin eto nacalo kons=ca to yest {10,15,20} nacnyot s 20 i obratno
	std::cout << *iter << "\n";
}
}
