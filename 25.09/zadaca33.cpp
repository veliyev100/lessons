#include <iostream>
#include <map>
#include <string>

int main() {
	std::map<std::string, int> years = {
		{"moscow", 1147},
		{"rome", -753},
		{"london",47},
	};
	for(const auto& [city,year]:years) {
		std::cout << city << ":" << year << "\n";
	}
}
