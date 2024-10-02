#include <algorithm>
#include <vector>
#include <iostream>

int main() {
    std::vector<int> v = {5, 5, 3, 2, 2, 5, 9, 1,};
    auto iter = std::unique(v.begin(), v.end());
    // В векторе окажется 5, 3, 2, 5, 9, 1, 9, 1
    //                                      ^ iter будет указывать сюда
    for(int a : v) {
		std::cout << a << "\n";
	}
    v.erase(iter, v.end());  // удаляем хвост из ненужных элементов
    for(int a : v) {
		std::cout << a << " ";
	}
}

