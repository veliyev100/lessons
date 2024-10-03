#include <iostream>
#include <functional>
#include <queue>
#include <vector>

int main() {
    std::priority_queue<
    int,
        std::vector<int>,  // тип внутреннего контейнера; его приходится указывать, если нам нужен третий параметр
        std::greater<int>  // вспомогательная обёртка над оператором > (а не <)
    > pq;

    for (int x : {3, 14, 15, 92, 6}) {
        pq.push(x);
    }

    while (!pq.empty()) {
        std::cout << pq.top() << " ";
        pq.pop();
    }
    // Будет напечатано 3 6 14 15 92
}


