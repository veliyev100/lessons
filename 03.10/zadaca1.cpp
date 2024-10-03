#include <iostream>
#include <stack>

int main() {
    std::stack<int> s;
    s.push(1);
    s.push(13);
    
    s.pop();  // удалить элемент с вершины стека (в стеке останется 1)

    std::cout << s.top() << "\n";  // получить элемент на вершине стека, не удаляя его

    if (s.empty()) {  // проверка на пустоту
       std::cout << "Stack is empty\n";
    }
}

