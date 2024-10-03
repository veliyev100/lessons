#include <iostream>
#include <queue>

int main() {
    std::queue<int> s;
    
    s.push(1);
    s.push(13);
    
    std::cout << s.front() << "\n";  // 1
    std::cout << s.back() << "\n";  // 13

    s.pop();  // в очереди останется 13

    if (s.empty()) {
       std::cout << "Queue is empty\n";
    }
}

