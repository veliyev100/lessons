#include <algorithm>
#include <deque>
#include <iostream>

int main() {
    std::deque<int> d = {3, 14, 15, 92, 6};

    // Такой элемент есть, мы его точно найдём
    auto iter1 = std::find(d.begin(), d.end(), 15);
    // Итераторы дека можно вычитать, напечатается индекс найденного элемента
    std::cout << (iter1 - d.begin()) << "\n";

    auto start = d.begin();
    // К итераторам дека и вектора можно прибавлять целые числа
    auto end = start + 3;
    // Полуинтервал [start; end) теперь ограничивает подпоследовательность 3, 14, 15

    auto iter2 = std::find(start, end, 19);
    if (iter2 == end) {
        std::cout << "No such element!\n";
    } else {
        std::cout << *iter2 << "\n";
    }
    // Напечатает No such element
}
